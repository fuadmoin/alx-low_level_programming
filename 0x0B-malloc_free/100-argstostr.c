#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates two strings.
 * @ac: integer
 * @av: the first pointer
 * Return: pointer
 */

char *argstostr(int ac, char **av)
{
char *s;
int i, j, k = 0, len = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
for (j = 0; av[i][j] != '\0'; j++)
len++;

s = malloc(sizeof(char) * (len + ac + 1));
if (s == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
s[k++] = av[i][j];
s[k++] = '\n';
}

s[k] = '\0';

return (s);
}
