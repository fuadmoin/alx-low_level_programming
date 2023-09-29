#include "main.h"

/**
 * _strcpy -Copy a string
 * @dest: Destination value
 * @src: Source value
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int counter;
for (counter = 0; src[counter] != '\0'; counter++)
{
dest[counter] = src[counter];
}
dest[counter++] = '\0';
return (dest);
}
