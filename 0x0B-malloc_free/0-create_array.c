#include "main.h"

/**
 * create_array - print strings followed by a new line.
 * @size: integer
 * @c: character
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;

if (size == 0)
return (0);

array = malloc(sizeof(char) * size + 1);

if (array == 0)
return (0);

for (i = 0; i < size; i++)
array[i] = c;

array[size] = '\0';

return (array);
}
