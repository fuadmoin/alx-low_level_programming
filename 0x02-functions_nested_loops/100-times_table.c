#include "main.h"

/**
 * print_times_table - prints the times table
 * @n: the number to print the times table for
*/
void print_times_table(int n)
{
int number, multiplier, prouduct;
if (n >= 0 && n <= 15)
{
for (number = 0; number <= n; number++)
{
_putchar('0');
for (multiplier = 1; multiplier <= n; multiplier++)
{
_putchar(',');
_putchar(' ');
prouduct = multiplier * number;
if (prouduct <= 99)
_putchar(' ');
if (prouduct <= 9)
_putchar(' ');
if (prouduct >= 100)
{
_putchar((prouduct / 100) + '0');
_putchar((prouduct / 10) % 10 + '0');
}
else if (prouduct <= 99 && prouduct >= 10)
{
_putchar((prouduct / 10) + '0');
}
_putchar((prouduct % 10) + '0');
}
_putchar('\n');
}
}
}
