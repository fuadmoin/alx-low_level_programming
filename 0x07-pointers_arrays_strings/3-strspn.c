#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: The first pointer
 * @accept: the second pointer
 * Return: a pointer
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;

while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
{
count++;
break;
}
a++;
}

if (*a == '\0')
break;

s++;
}

return (count);
}
