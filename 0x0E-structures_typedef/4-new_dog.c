#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: struct.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog;
char *newName, *newOwner;

newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
return (NULL);

newName = strdup(name);
if (newName == NULL)
{
free(newDog);
return (NULL);
}

newOwner = strdup(owner);
if (newOwner == NULL)
{
free(newName);
free(newDog);
return (NULL);
}

newDog->name = newName;
newDog->age = age;
newDog->owner = newOwner;

return (newDog);
}
