#include <stdio.h>

/**
 * main - prints the alphabet in lowercase reverse order
 * Return: 0
*/
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
putchar(c);
putchar('\n');
return (0);
}
