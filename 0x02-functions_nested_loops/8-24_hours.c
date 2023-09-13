#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints minutes of a day.
 * Return: absolute value of n.
 */

void jack_bauer(void)
{
int first, second, third, last;
for (first = 0; first <= 2; first++)
{
for (second = 0; second <= 9; second++)
{
if ((first <= 1 && second <= 9) || (first <= 2 && second <= 3))
{
for (third = 0; third <= 5; third++)
{
for (last = 0; last <= 9; last++)
{
_putchar(first + '0');
_putchar(second + '0');
_putchar(58);
_putchar(third + '0');
_putchar(last + '0');
_putchar('\n');
}
}
}
}
}
}
