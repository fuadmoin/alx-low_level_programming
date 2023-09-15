#include "main.h"

/**
* print_triangle - prints a diagonal of '#' characters.
* @size: number of times to print '#'
* Return: nothing
*/

void print_triangle(int size)
{
int i = 0, j, k;
while (i < size)
{
j = 0;
while (j < size - i - 1)
{
_putchar(' ');
j++;
}
k = 0;
while (k < i + 1)
{
_putchar('#');
k++;
}
_putchar('\n');
i++;
}
_putchar('\n');
}
