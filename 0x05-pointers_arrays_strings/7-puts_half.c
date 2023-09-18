#include "main.h"

/**
* puts_half - prints half of a string.
* @str: pointer to a char
* Return: nothing
*/

void puts_half(char *str)
{
int i, len = 0, middle;
while (*str != '\0')
{
len++;
}
if (len % 2 == 0)
middle = len / 2;
else
middle = (len + 1) / 2;
for (i = middle; i < len ; i++)
_putchar(str[i]);
_putchar('\n');
}
