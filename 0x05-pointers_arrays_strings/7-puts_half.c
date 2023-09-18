#include "main.h"

/**
* puts_half - prints half of a string.
* @str: pointer to a char
* Return: nothing
*/

void puts_half(char *str)
{
int i, len = 0;
char *start = str;
while (*str != '\0')
{
len++;
str++;
}
if (len % 2 == 0)
{
for (i = len / 2; start[i] != '\0'; i++)
_putchar(start[i]);
}
else
{
for (i = (len - 1) / 2; start[i] != '\0'; i++)
_putchar(start[i]);
}
_putchar('\n');
}
