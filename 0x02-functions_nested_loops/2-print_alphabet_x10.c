#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - print the alphabet x10
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
char starter = 'a';
while (starter <= 'z')
{
_putchar(starter);
starter++;
}
_putchar('\n');
i++;
}
}
