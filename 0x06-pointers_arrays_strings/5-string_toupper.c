#include "main.h"
#include <ctype.h>

/**
 * string_toupper - change strings to uppercase.
 * @s: The first pointer
 * Return: a pointer
 */

char *string_toupper(char *s)
{
char *temp = s;

while (*temp)
{
*temp = toupper((unsigned char) *temp);
temp++;
}

return (s);
}
