#include "main.h"
/**
 * times_table -  prints the nine times table.
 *
 *
 * Return: void.
 */
void times_table(void)
{
int i, j, ij;

for (i = 0; i < 10; i++)
{
_putchar('0');
for (j = 0; j < 10; j++)
{
_putchar(',');
_putchar(' ');

ij = i * j;

if (ij < 10)
_putchar(' ');
else
_putchar((ij / 10) + '0');
_putchar((ij % 10) + '0');
}
_putchar('\n');
}
}
