#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_number - checks if a string is a number.
 * @str: the first pointer
 * Return: zero
 */

int is_number(char *str)
{
int i = 0;
for (; str[i] != '\0'; i++)
{
if (str[i] < '0' || str[i] > '9')
{
return (0);
}
}
return (1);
}

/**
 * main - adds two positive numbers.
 * @argc: integer
 * @argv: the first pointer
 * Return: zero
 */

int main(int argc, char *argv[])
{
int sum = 0, i = 1;
for (; i < argc; i++)
{
if (!is_number(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
