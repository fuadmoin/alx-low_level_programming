#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals.
 * @a: The first pointer
 * @size: integer
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
int i;
unsigned int sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - i - 1)];
}

printf("%d, %d\n", sum1, sum2);
}
