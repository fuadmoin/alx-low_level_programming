#include "main.h"

/**
* print_rev - returns the string in reverse.
* @s: pointer to a char
* Return: nothing
*/

void print_rev(char *s)
{
int len = 0, i = 0;
char *start = s;
while (*s != '\0')
{
len++;
s++;
}
for (i = len - 1; i >= 0; i--)
{
_putchar(start[i]);
}
_putchar('\n');
}
