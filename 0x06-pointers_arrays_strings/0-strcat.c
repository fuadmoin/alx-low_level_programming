#include "main.h"

/**
 * _strcat - concatenate two strings.
 * @dest: The first pointer
 * @src: The second pointer
 * Return: a pointer
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[j] != '\0')
j++;
while (src[i] != '\0')
{
dest[j++] = src[i++];
}
dest[j] = '\0';
return (dest);
}
