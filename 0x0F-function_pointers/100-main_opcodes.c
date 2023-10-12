#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 or 2 on error
 */
int main(int argc, char *argv[])
{
int i, bytes;
unsigned char *func_ptr;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}

func_ptr = (unsigned char *)main;
for (i = 0; i < bytes; i++)
{
printf("%02x", func_ptr[i]);
if (i < bytes - 1)
printf(" ");
else
printf("\n");
}

return (0);
}
