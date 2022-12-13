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

for (i = 0; i <= 9; i++)
{
for (j = 0; j <=9; j++)
{
_putchar(i);
_putchar(j);
_putchar('\n');
_putchar(i*j);
return;
}
}
}

