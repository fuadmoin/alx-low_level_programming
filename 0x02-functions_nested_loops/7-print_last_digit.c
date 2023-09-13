#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number.
 * @n: int - character to be checked.
 * Return: absolute value of n.
 */

int print_last_digit(int n)
{
int last_digit = n % 10;
if (last_digit < 0)
last_digit = -last_digit;
_putchar(last_digit + '0');
return (last_digit);
}
