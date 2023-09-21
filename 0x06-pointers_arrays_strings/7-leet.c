#include "main.h"

/**
 * leet - Convert a string to leet speak.
 * @s: The first pointer
 * Return: a pointer
 */

char *leet(char *s)
{
int i, j;
char letters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (s[i] == letters[j])
{
s[i] = numbers[j];
break;
}
}
}

return (s);
}
