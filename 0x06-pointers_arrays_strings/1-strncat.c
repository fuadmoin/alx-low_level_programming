#include "main.h"

/**
 * _strncat - concatenate two strings.
 * @dest: The first pointer
 * @src: The second pointer
 * @n: integer
 * Return: a pointer
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[j] != '\0')
j++;
while (src[i] != '\0' && n-- > 0)
dest[j++] = src[i++];
dest[j] = '\0';
return (dest);
}
