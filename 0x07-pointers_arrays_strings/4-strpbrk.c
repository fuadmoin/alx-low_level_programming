#include "main.h"

/**
 * _strpbrk - searches a string for any of set of bytes.
 * @s: The first pointer
 * @accept: the second pointer
 * Return: a pointer
 */

char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
return (s);
a++;
}
s++;
}

return (0);
}
