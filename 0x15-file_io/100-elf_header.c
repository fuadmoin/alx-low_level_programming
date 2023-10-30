#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <elf.h>

#define BUFFER_SIZE 1024

/**
 * error - handles the code into a separate fucntion
 * @msg: the first pointer
 * @file: the second pointer
*/
void error(char *msg, char *file)
{
dprintf(STDERR_FILENO, "%s %s\n", msg, file);
exit(98);
}

/**
 * print_elf_header - prints the file
 * @header: pointer
 * Returns - Nothing
*/
void print_elf_header(Elf64_Ehdr *header)
{
printf("ELF Header:\n");
printf("  Magic:   7f 45 4c 46 %02x %02x %02x\n",
header->e_ident[EI_CLASS],
header->e_ident[EI_DATA],
header->e_ident[EI_VERSION]);
printf("  Class:                             %s\n",
header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
printf("  Data:                              %s\n",
header->e_ident[EI_DATA] == ELFDATA2LSB ?
"2's complement, little endian" : "2's complement, big endian");
printf("  Version:                           %d (current)\n",
header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            UNIX - System V\n");
printf("  ABI Version:                       %d\n",
header->e_ident[EI_OSABI]);
printf("  Type:                              %s\n",
header->e_type == ET_EXEC ? "EXEC (Executable file)" :
"DYN (Shared object file)");
printf("  Entry point address:               %#010x\n",
(unsigned int)header->e_entry);
}

/**
 * main - Displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, or 98 on failure.
 */
int main(int argc, char *argv[])
{
int fd;
ssize_t read_count;
char elf_magic[4];
Elf64_Ehdr header;

if (argc != 2)
error("Usage: elf_header", "elf_filename");

fd = open(argv[1], O_RDONLY);
if (fd == -1)
error("Error: Can't read from file", argv[1]);

read_count = read(fd, elf_magic, 4);
if (read_count != 4 || !(elf_magic[0] == 0x7f && elf_magic[1] == 'E' &&
elf_magic[2] == 'L' && elf_magic[3] == 'F'))
error("Error: Not an ELF file", argv[1]);

lseek(fd, 0, SEEK_SET);
read_count = read(fd, &header, sizeof(header));
if (read_count != sizeof(header))
error("Error: Can't read from file", argv[1]);

print_elf_header(&header);

close(fd);

return (0);
}
