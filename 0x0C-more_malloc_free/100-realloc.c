#include "main.h"

/**
 * _realloc - reallocates a memory block.
 * @old_size: the first integer
 * @new_size: the second integer
 * @ptr: the pointer to the memory block
 * Return: pointer.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int min_size, i;

if (new_size == old_size)
return (ptr);

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
return (new_ptr);
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
free(ptr);
return (NULL);
}

min_size = old_size < new_size ? old_size : new_size;

for (i = 0; i < min_size; i++)
((char *)new_ptr)[i] = ((char *)ptr)[i];

free(ptr);

return (new_ptr);
}
