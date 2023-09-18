#include "main.h"

/**
 * print_array -prints n elemets of the array of intiger
 * @a: Array of intigers
 * @n: Number of elements of the array to be printed
 * Return: void;
 */


void print_array(int *a, int n)
{
int i = 0;
for (; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
}
