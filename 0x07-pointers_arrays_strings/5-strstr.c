#include "main.h"

/**
 * _strstr - locates substring.
 * @haystack: The first pointer
 * @needle: the second pointer
 * Return: a pointer
 */

char *_strstr(char *haystack, char *needle)
{
char *p1 = haystack, *p2 = needle;
char *p1Adv = haystack;
while (*++p2)
p1Adv++;
while (*p1Adv)
{
char *p1Begin = p1;
p2 = needle;
while (*p1 && *p2 && *p1 == *p2)
{
p1++;
p2++;
}
if (!*p2)
return (p1Begin);
p1 = p1Begin + 1;
p1Adv++;
}
return (0);
}
