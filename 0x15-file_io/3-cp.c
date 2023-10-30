#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * error_close - Prints an error message and exits with code 100.
 * @fd: The file descriptor to be written to STDERR_FILENO.
 */
void error_close(int fd)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}

/**
 * error_read - Prints an error message and exits with code 98.
 * @file: The name of the file to be read from.
 */
void error_read(char *file)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
exit(98);
}

/**
 * error_write - Prints an error message and exits with code 99.
 * @file: The name of the file to be written to.
 */
void error_write(char *file)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, or one of 97, 98, 99, 100 on failure.
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;
ssize_t read_count, write_count;
char buffer[BUFFER_SIZE];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
error_read(argv[1]);

fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
error_write(argv[2]);

while ((read_count = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
write_count = write(fd_to, buffer, read_count);
if (write_count != read_count)
error_write(argv[2]);
}

if (read_count == -1)
error_read(argv[1]);

if (close(fd_from) == -1)
error_close(fd_from);

if (close(fd_to) == -1)
error_close(fd_to);

return (0);
}
