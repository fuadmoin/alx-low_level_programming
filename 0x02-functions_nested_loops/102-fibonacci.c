#include <stdio.h>

/**
 * main - prints the first 52 fibonacci numbers
 * Return: Noting
 */
int main(void)
{
int counter = 0;
long x = 1, y = 2;

while (counter < 50)
{
if (counter == 0)
printf("%ld", x);
else if (counter == 1)
printf(", %ld", y);
else
{
y += x;
x = y - x;
printf(", %ld", y);
}
counter++;
}
printf("\n");
return (0);
}
