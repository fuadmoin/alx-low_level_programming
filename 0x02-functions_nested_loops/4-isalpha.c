#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Checks if c is a alphabet letter.
 * @c: int - character to be checked.
 * Return: 1 if c is in lowercase else returns 0.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
return (0);
}
