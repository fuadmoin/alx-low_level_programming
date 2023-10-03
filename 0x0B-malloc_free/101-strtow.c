#include "main.h"
#include <stdlib.h>

/**
 * count_words - counts the number of words in a string.
 * @str: the first pointer
 * Return: integer.
 */

int count_words(char *str)
{
int i, count = 0;

for (i = 0; str[i]; i++)
if ((str[i] == ' ' || str[i + 1] == '\0') && str[i - 1] != ' ')
count++;

return (count);
}

/**
 * strtow - concatenates all the arguments of the program.
 * @str: the first pointer
 * Return: pointer
 */

char **strtow(char *str)
{
char **words;
int i, j, k, l, count;

if (str == NULL || *str == '\0')
return (NULL);

count = count_words(str);
words = malloc(sizeof(char *) * (count));
if (words == NULL)
return (NULL);

for (i = 0, l = 0; i < count; i++)
{
while (str[l] == ' ')
l++;

for (j = l; str[j] != ' ' && str[j]; j++)
;

words[i] = malloc(sizeof(char) * (j - l + 1));
if (words[i] == NULL)
{
for (; i >= 0; i--)
free(words[i]);
free(words);
return (NULL);
}

for (k = 0; l < j; l++, k++)
words[i][k] = str[l];

words[i][k] = '\0';
}

words[i] = NULL;

return (words);
}
