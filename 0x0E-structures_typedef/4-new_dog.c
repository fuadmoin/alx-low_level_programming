#include <stdlib.h>
#include "dog.h"

/**
 * _str_len - returns the length of a string
 * @str: string to evaluate
 *
 * Return: integer
 */
int _str_len(char *str)
{
int len;

len = 0;

while (str[len] != '\0')
len++;

return (len);
}

/**
 * *_str_cpy - copies a string
 * @dest: destination string
 * @src: source string
 *
 * Return: the pointer to dest
 */
char *_str_cpy(char *dest, char *src)
{
int str_len, i;

str_len = 0;

while (src[str_len] != '\0')
{
str_len++;
}

for (i = 0; i < str_len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}


/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog;
int name_len, owner_len;

name_len = _str_len(name);
owner_len = _str_len(owner);

newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
return (NULL);

newDog->name = malloc(sizeof(char) * (name_len + 1));
if (newDog->name == NULL)
{
free(newDog);
return (NULL);
}
newDog->owner = malloc(sizeof(char) * (owner_len + 1));
if (newDog->owner == NULL)
{
free(newDog);
free(newDog->name);
return (NULL);
}
_str_cpy(newDog->name, name);
_str_cpy(newDog->owner, owner);
newDog->age = age;

return (newDog);
}
