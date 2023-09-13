#include "main.h"
#include <stdio.h>

/**
 * _islower - Checks if c is a lowercase letter.
 * @c: int - character to be checked.
 * Return: 1 if c is in lowercase else returns 0.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
return (0);
}
