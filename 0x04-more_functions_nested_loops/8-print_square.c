#include "main.h"

/**
* print_square - prints a square '#' characters.
* @size: number of times to print '#'
* Return: nothing
*/

void print_square(int size)
{
int i = 0, j;
while (i < size)
{
j = 0;
while (j < size)
{
_putchar('#');
j++;
}
_putchar('\n');
i++;
}
_putchar('\n');
}
