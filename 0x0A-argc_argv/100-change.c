#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints minimum number of coin.
 * @argumentCount: number of arguments
 * @argumentValues: array of arguments
 * Return: 0 (Success), 1 (Error)
 */
int main(int argumentCount, char *argumentValues[])
{
int inputAmount, coinIndex, coinCount;
int coinValues[] = {25, 10, 5, 2, 1};

if (argumentCount != 2)
{
printf("Error\n");
return (1);
}

inputAmount = atoi(argumentValues[1]);
coinCount = 0;

if (inputAmount < 0)
{
printf("0\n");
return (0);
}

for (coinIndex = 0; coinIndex < 5 && inputAmount >= 0; coinIndex++)
{
while (inputAmount >= coinValues[coinIndex])
{
coinCount++;
inputAmount -= coinValues[coinIndex];
}
}

printf("%d\n", coinCount);
return (0);
}
