#include "main.h"

/**
 * _strcmp - compares strings.
 * @s1: The first pointer
 * @s2: The second pointer
 * Return: a pointer
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
