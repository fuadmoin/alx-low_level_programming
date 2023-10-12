#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *s, *sep = "";

va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
break;
case 's':
s = va_arg(args, char *);
if (!s)
s = "(nil)";
printf("%s%s", sep, s);
break;
default:
continue;
}
sep = ", ";
i++;
}

va_end(args);

printf("\n");
}
