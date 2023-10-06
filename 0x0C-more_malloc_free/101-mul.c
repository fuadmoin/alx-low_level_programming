#include "main.h"

/**
 * _isdigit - checks if a string only contains digits
 * @str: string to check
 *
 * Return: 1 if str only contains digits, and 0 otherwise
 */
int _isdigit(char *str)
{
int i;

for (i = 0; str[i]; i++)
{
if (str[i] < '0' || str[i] > '9')
return (0);
}

return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 if successful, 1 if program fails
 */

int main(int argc, char *argv[])
{
long num1, num2, product;

if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
{
printf("Error\n");
exit(98);
}

num1 = atol(argv[1]);
num2 = atol(argv[2]);
product = num1 *num2;

printf("%ld\n", product);

return (0);
}
