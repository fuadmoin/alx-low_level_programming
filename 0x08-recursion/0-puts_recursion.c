#include "main.h"

/**
 * _puts_recursion - print strings followed by a new line.
 * @s: The first pointer
 * Return: nothing
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
