#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print all natural numbers from n to 98
 * @number: The number to start printing from
 * Return: Always 0.
 */

void print_to_98(int number)

{

if (number <= 98)
{
for (; number <= 98; number++)
{
if (number == 98)
{
printf("%d", number);
printf("\n");
break;
}
else
{
printf("%d, ", number);
}
}
}
else
{
for (; number >= 98; number--)
{
if (number == 98)
{
printf("%d", number);
printf("\n");
break;
}
else
{
printf("%d, ", number);
}
}
}
}
