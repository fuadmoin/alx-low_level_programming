#include "main.h"

int sqrt_checker(int n, int i);

/**
 * _sqrt_recursion - square root of a number.
 * @n: integer
 * Return: integer
 */

int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (sqrt_checker(n, 1));
}

/**
 * sqrt_checker - check if a number is a perfect square.
 * @number: integer
 * @currentGuess: integer
 * Return: method
 */

int sqrt_checker(int number, int currentGuess)
{
if (currentGuess * currentGuess > number)
return (-1);
else if (currentGuess * currentGuess == number)
return (currentGuess);
return (sqrt_checker(number, currentGuess + 1));
}
