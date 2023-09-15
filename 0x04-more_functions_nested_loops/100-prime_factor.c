#include <stdio.h>

/**
* main - prints the largest prime factors of 612852475143.
* Return: 0
*/

int main(void)
{
long int n = 612852475143;
long int i = 2;
while (i < n)
{
if (n % i == 0)
n /= i;
else
i++;
}
printf("%ld\n", n);
return (0);
}
