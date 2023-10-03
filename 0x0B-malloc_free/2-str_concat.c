#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first pointer
 * @s2: the second pointer
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
int i, j;
char *s;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (i = 0; s1[i] != '\0'; i++)
;
for (j = 0; s2[j] != '\0'; j++)
;

s = malloc(sizeof(char) * (i + j + 1));
if (s == NULL)
return (NULL);

for (i = 0; s1[i] != '\0'; i++)
s[i] = s1[i];
for (j = 0; s2[j] != '\0'; j++)
s[i + j] = s2[j];

s[i + j] = '\0';

return (s);
}
