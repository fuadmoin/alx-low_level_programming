#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 *
 * @s: The operator
 * Return: The function associated
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int i;

while (i < 5)
{
if (strcmp(s, ops[i].op) == 0)
return (ops[i].f);
}
return (NULL);
}
