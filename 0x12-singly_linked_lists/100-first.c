#include <stdio.h>

/**
 * premain - function that prints a string
 *
 * Return: nothing
 */

void __attribute__((constructor)) premain()
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
printf("(A tortoise, having pretty good sense of a hare's ");
printf("nature, challenges one to a race.)\n");
return (0);
}
