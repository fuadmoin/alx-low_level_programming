#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of args passed to it.
 * @argc: integer
 * @argv: the first pointer
 * Return: nothing
 */

int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
