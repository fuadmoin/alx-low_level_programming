#include <stdio.h>

/**
 *  main - prints the sum of even Fibonacci numbers
 *  Return: 0 in case of success
*/
int main(void)
{
int counter = 0;
long x = 1, y = 2, sum = y;
while (y + x <= 4000000)
{
y += x;
if (y % 2 == 0)
sum += y;
x = y - x;
counter++;
}
printf("%ld\n", sum);
return (0);
}
