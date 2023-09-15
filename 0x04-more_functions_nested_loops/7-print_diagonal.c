#include "main.h"

/**
* print_diagonal - prints a diagonal of '\' characters.
* @n: number of times to print '\'
* Return: nothing
*/

void print_diagonal(int n)
{
int i = 0, j;
while (i < n)
{
j = 0;
while (j < i)
{
_putchar(' ');
j++;
}
_putchar('\\');
_putchar('\n');
i++;
}
_putchar('\n');
}
