#include "main.h"

/**
* swap_int - swaps two integers.
* @b: pointer to an int
* @a: pointer to an int
* Return: nothing
*/

void swap_int(int *a, int *b)
{
int temp = *a;

*a = *b;
*b = temp;
}
