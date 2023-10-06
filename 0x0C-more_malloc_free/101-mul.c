#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * _isdigit - checks if a string only contains digits
 * @str: string to check
 *
 * Return: 1 if str only contains digits, and 0 otherwise
 */
int _isdigit(char *str)
{
int index = 0;

while (str[index])
{
if (str[index] < '0' || str[index] > '9')
return (0);
index++;
}
return (1);
}

/**
* _strlen - returns the length of a string
* @str: string to evaluate
*
* Return: the length of the string
*/
int _strlen(char *str)
{
int index = 0;

while (str[index] != '\0')
{
index++;
}
return (index);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
printf("Error\n");
exit(98);
}

/**
* main - multiplies two positive numbers
* @argc: number of arguments
* @argv: array of arguments
*
* Return: always 0 (Success)
*/
int main(int argc, char *argv[])
{
char *num1, *num2;
int len_num1, len_num2, total_len, index, carry_over;
int digit_num1, digit_num2, *result_array, flag = 0;
num1 = argv[1], num2 = argv[2];
if (argc != 3 || !_isdigit(num1) || !_isdigit(num2))
errors();
len_num1 = _strlen(num1);
len_num2 = _strlen(num2);
total_len = len_num1 + len_num2 + 1;
result_array = malloc(sizeof(int) * total_len);
if (!result_array)
return (1);
for (index = 0; index <= len_num1 + len_num2; index++)
result_array[index] = 0;
for (len_num1 = len_num1 - 1; len_num1 >= 0; len_num1--)
{
digit_num1 = num1[len_num1] - '0';
carry_over = 0;
for (len_num2 = _strlen(num2) - 1; len_num2 >= 0; len_num2--)
{
digit_num2 = num2[len_num2] - '0';
carry_over += result_array[len_num1 + len_num2 + 1] + (digit_num1 *digit_num2);
result_array[len_num1 + len_num2 + 1] = carry_over % 10;
carry_over /= 10;
}
if (carry_over > 0)
result_array[len_num1 + len_num2 + 1] += carry_over;
}
for (index = 0; index < total_len - 1; index++)
{
if (result_array[index])
flag = 1;
if (flag)
_putchar(result_array[index] + '0');
}
if (!flag)
_putchar('0');
_putchar('\n');
free(result_array);
return (0);
}
