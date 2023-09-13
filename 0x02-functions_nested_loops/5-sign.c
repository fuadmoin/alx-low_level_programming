#include "main.h"
#include <stdio.h>

/**
 * print_sign - Checks if c is a alphabet letter.
 * @n: int - character to be checked.
 * Return: 1 if n is in greater than 0 else returns 0.
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
