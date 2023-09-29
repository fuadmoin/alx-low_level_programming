#include "main.h"
#include <stdio.h>

/**
 * main - prints its name.
 * @argc: integer
 * @argv: the first pointer
 * Return: zero
 */

int main(int argc, char *argv[])
{
if (argc > 0)
printf("%s\n", argv[0]);
return (0);
}
