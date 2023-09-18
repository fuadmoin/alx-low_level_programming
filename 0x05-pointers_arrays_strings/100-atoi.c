#include "main.h"

/**
 * _atoi -convert a string to an intiger.
 * @s: The pointer to convert
 * Return: an integer
 */

int _atoi(char *s)
{
int c = 0;
unsigned int converted_integer = 0;
int min = 1;
int temp = 0;

while (s[c])
{
if (s[c] == 45)
{
min *= -1;
}
while (s[c] >= 48 && s[c] <= 57)
{
temp = 1;
converted_integer = (converted_integer * 10) + (s[c] - '0');
c++;
}
if (temp == 1)
{
break;
}
c++;
}
converted_integer *= min;
return (converted_integer);
}
