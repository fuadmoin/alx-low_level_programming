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
int i = 0;
for (; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
