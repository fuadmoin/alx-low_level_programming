#include "main.h"
#include <stdio.h>

/**
 * _atoi -convert a string to an intiger.
 * @s: The pointer to convert
 * Return: an integer
 */

int _atoi(char *s)
{
int c = 0;
unsigned int converted_integer = 0;
int min = 1;
int temp = 0;

while (s[c])
{
if (s[c] == 45)
{
min *= -1;
}
while (s[c] >= 48 && s[c] <= 57)
{
temp = 1;
converted_integer = (converted_integer * 10) + (s[c] - '0');
c++;
}
if (temp == 1)
{
break;
}
c++;
}
converted_integer *= min;
return (converted_integer);
}

/**
 * main - multiplies two numbers.
 * @argc: integer
 * @argv: the first pointer
 * Return: zero
 */

int main(int argc, char *argv[])
{
int result, num1, num2;

if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}

num1 = _atoi(argv[1]);
num2 = _atoi(argv[2]);
result = num1 *num2;

printf("%d\n", result);

return (0);
}
