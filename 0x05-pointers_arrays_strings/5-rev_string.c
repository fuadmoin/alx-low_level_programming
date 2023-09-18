#include "main.h"

/**
* rev_string - returns the string in reverse.
* @s: pointer to a char
* Return: nothing
*/

void rev_string(char *s)
{
int len = 0, i = 0;
char *start = s;
while (*s != '\0')
{
len++;
s++;
}

for (i = 0; i < len / 2; i++)
{
char temp = start[i];
start[i] = start[len - 1 - i];
start[len - 1 - i] = temp;
}
}
