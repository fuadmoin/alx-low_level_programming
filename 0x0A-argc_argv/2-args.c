#include "main.h"
#include <stdio.h>

/**
 * main - all args it receives.
 * @argc: integer
 * @argv: the first pointer
 * Return: zero
 */

int main(int argc, char *argv[])
{
for (int i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
