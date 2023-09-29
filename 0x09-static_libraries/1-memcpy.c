#include "main.h"

/**
 * _memcpy - copy memory array.
 * @dest: The first pointer
 * @src: The second pointer
 * @n: integer
 * Return: a pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}
