#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog.
 * @d: the pointer to the struct
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: ");
if (d->name != NULL)
printf("%s\n", d->name);
else
printf("(nil)\n");

printf("Age: %.6f\n", d->age);

printf("Owner: ");
if (d->owner != NULL)
printf("%s\n", d->owner);
else
printf("(nil)\n");
}
}
