#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers to 98
 * @n: value to be checked
 *
 */
void print_to_98(int n)
{
int i;
for (i = n; i <= 98; i++)
{
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
putchar(',');
putchar(' ');
if (i != 98)
{
putchar(',');
putchar(' ');
}
}


putchar('\n');
}