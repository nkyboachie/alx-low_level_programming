#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers to 98
 * @n: value to be checked
 *
 */
void print_to_98(int n)
{
int i, j, n;

for (i = 0 ; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
n = i * j;

if ((n / 10) == 0)
{
if (j != 0)
putchar(' ');
putchar(n + '0');

if (j == 9)
continue;
putchar(',');
putchar(' ');
}
else
{
putchar((n / 10) + '0');
putchar((n % 10) + '0');

if (j == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');

}
}


