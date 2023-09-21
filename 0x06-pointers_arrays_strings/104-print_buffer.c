#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer.
 * @b: The first pointer
 * @size: integer
 * Return: a pointer
 */

void print_buffer(char *b, int size)
{
int i, j, temp = 0;

if (size <= 0)
{
printf("\n");
return;
}
while (temp < size)
{
j = size - temp < 10 ? size - temp : 10;
printf("%08x: ", temp);
for (i = 0; i < 10; i++)
{
if (i < j)
printf("%02x", *(b + temp + i));
else
printf("  ");
if (i % 2)
printf(" ");
}
for (i = 0; i < j; i++)
{
int a = *(b + temp + i);
if (a < 32 || a > 132)
a = '.';
printf("%c", a);
}
printf("\n");
temp += 10;
}
}
