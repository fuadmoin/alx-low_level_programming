#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints the alphabet
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
char starter = 'a';
while (starter <= 'z')
{
_putchar(starter);
starter++;
}
_putchar('\n');
}
