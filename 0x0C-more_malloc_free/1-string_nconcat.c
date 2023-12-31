#include "main.h"

/**
 * string_nconcat - concatinates two strings.
 * @n: integer
 * @s1: the first pointer
 * @s2: the second pointer
 * Return: pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len1, len2, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

len1 = strlen(s1);
len2 = strlen(s2);

if (n >= len2)
concat = malloc(sizeof(char) * (len1 + len2 + 1));
else
concat = malloc(sizeof(char) * (len1 + n + 1));

if (concat == NULL)
return (NULL);

for (i = 0; s1[i]; i++)
concat[i] = s1[i];

for (j = 0; s2[j] && j < n; j++)
concat[i + j] = s2[j];

concat[i + j] = '\0';

return (concat);
}
