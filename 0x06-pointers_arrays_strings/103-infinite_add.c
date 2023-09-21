#include "main.h"

/**
 * infinite_add - adds two integers.
 * @n1: The first pointer
 * @n2: The second pointer
 * @r: integer
 * @size_r: integer
 * Return: a pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0, o = 0, d = 0, v1 = 0, v2 = 0, t = 0;
while (*(n1 + i) != '\0')
i++;
while (*(n2 + j) != '\0')
j++;
i--;
j--;
if (i >= size_r || i >= size_r)
return (0);
while (j >= 0 || i >= 0 || o == 1)
{
if (i < 0)
v1 = 0;
else
v1 = *(n1 + i) -'0';
if (j < 0)
v2 = 0;
else
v2 = *(n2 + j) -'0';
t = v1 + v2 + o;
if (t >= 10)
o = 1;
else
o = 0;
if (d >= (size_r - 1))
return (0);
*(r + d) = (t % 10) + '0';
d++;
i--;
j--;
}
if (d == size_r)
return (0);
*(r + d) = '\0';
rev_string(r);
return (r);
}
