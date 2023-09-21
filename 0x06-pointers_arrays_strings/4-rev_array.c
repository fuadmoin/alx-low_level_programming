#include "main.h"

/**
 * reverse_array - reverse arrays.
 * @a: The first pointer
 * @n: integer
 * Return: a pointer
 */

void reverse_array(int *a, int n)
{
int start = 0;
int end = n - 1;
int temp;

while (start < end)
{
temp = a[start];
a[start] = a[end];
a[end] = temp;

start++;
end--;
}
}
