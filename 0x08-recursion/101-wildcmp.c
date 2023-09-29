#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if strings are identcial.
 * @s1: the first pointer
 * @s2: the second pointer
 * Return: integer
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
else if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
else if (*s2 == '*')
return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
else
return (0);
}
