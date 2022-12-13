#include "main.h"
/**
 * times table -  prints the nine times table.
 *
 *
 * Return: void.
 */
void times_table(void)
{
int i;
int j;
int ij;

for (i = 0; i <= 9; i++)
{
_putchar('0');
for (j = 0; j <= 9; j++)
{
_putchar(',');
_putchar(' ');

ij = i * j;
if (ij < 10)
{
_putchar(' ');
}
else
{
_putchar((ij / 10) + '0');
_putchar((ij % 10) + '0');
}
}
return;
}
