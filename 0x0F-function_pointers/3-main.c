#include "3-calc.h"

/**
 * main - Struct op
 *
 * @argc: The operator
 * @argv: The function associated
 * Return: zero
 */

int main(int argc, char **argv)
{
int (*op_func)(int, int);
int num1, num2, result;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

op_func = get_op_func(argv[2]);
if (!op_func)
{
printf("Error\n");
exit(99);
}

printf("%d\n", op_func(atoi(argv[1]), atoi(argv[3])));

return (0);
}
