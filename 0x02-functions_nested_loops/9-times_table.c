#include "main.h"
#include <stdio.h>

/**
 * times_table - prints 9 time tables.
 * Return: absolute value of n.
 */

void times_table(void)
{
int outernumbers, innnernumbers, product, modules, result;

for (outernumbers = 0; outernumbers <= 9; outernumbers++)
{
for (innnernumbers = 0; innnernumbers <= 9; innnernumbers++)
{
product = outernumbers * innnernumbers;
if (product > 9)
{
modules = product % 10;
result = (product - modules) / 10;
_putchar(44);
_putchar(32);
_putchar(result + '0');
_putchar(modules + '0');
}
else
{
if (innnernumbers != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
_putchar(product + '0');
}
}
_putchar('\n');
}

}
