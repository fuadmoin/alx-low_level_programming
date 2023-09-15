#include "main.h"

/**
* print_line - prints line with '_'.
* @n: number of times to print '_'
* Return: nothing
*/

void print_line(int n)
{
int i = 0;
while (i < n)
{
_putchar('_');
i++;
}
_putchar('\n');
}
