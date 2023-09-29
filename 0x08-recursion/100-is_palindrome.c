#include "main.h"
#include <string.h>

int is_palindrome_helper(char *s, int start, int end);

/**
 * is_palindrome - returns 1 if the string is palindrome 0 otherwise.
 * @s: the first pointer
 * Return: string
 */

int is_palindrome(char *s)
{
int len = strlen(s);
return (is_palindrome_helper(s, 0, len - 1));
}

/**
 * is_palindrome_helper - checks if the string is palindrome.
 * @s: the first pointer
 * @start: integer
 * @end: integer
 * Return: method
 */

int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
return (1);
else if (s[start] != s[end])
return (0);
else
return (is_palindrome_helper(s, start + 1, end - 1));
}
