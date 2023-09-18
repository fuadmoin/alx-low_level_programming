#include "main.h"

/**
* puts2 - prints every other character in a string.
* @str: pointer to a char
* Return: nothing
*/

void puts2(char *str)
{
for (int i = 0; str[i] != '\0'; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
