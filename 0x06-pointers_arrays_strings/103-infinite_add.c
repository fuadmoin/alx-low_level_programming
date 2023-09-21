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
int i, j, k, l, m, n;
int carry = 0;
int val_n1, val_n2, sum;
i = strlen(n1);
j = strlen(n2);
if (i > size_r || j > size_r)
return (0);
r[size_r] = '\0';
k = size_r - 1;
for (--i, --j; i >= 0 && j >= 0; i--, j--, k--)
{
val_n1 = n1[i] - '0';
val_n2 = n2[j] - '0';
sum = val_n1 + val_n2 + carry;
carry = sum / 10;
r[k] = (sum % 10) + '0';
}
while (i >= 0)
{
sum = n1[i] - '0' + carry;
carry = sum / 10;
r[k] = (sum % 10) + '0';
i--;
k--;
}
while (j >= 0)
{
sum = n2[j] - '0' + carry;
carry = sum / 10;
r[k] = (sum % 10) + '0';
j--;
k--;
}
if (carry > 0)
{
if (k < 0)
return (0);
r[k] = carry + '0';
}
if (k >= 0)
{
for (l = k, m = 0; l <= size_r - 1; l++, m++)
r[m] = r[l];
r[m] = '\0';
}
return (r);
}
