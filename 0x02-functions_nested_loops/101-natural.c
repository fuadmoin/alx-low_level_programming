#include <stdio.h>

/**
 *  main - prints the sum of multiples of 3 and 5 between 0 and 1024
 *  Return: 0
*/
int main(void)
{
int counter, result = 0;
while (counter < 1024)
{
if ((counter % 3) == 0 || (counter % 5) == 0)
{
result += counter;
}
counter++;
}
printf("%d\n", result);
return (0);
}
