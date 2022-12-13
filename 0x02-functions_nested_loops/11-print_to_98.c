#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers to 98
 * @n: value to be checked
 *
 */
void print_to_98(int n)
{

if (n > 98)
{
int i;

for (i = n; i < 98; i++)
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
putchar('\n');
}
}
}