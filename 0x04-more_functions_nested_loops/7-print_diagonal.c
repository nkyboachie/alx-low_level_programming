#include "main.h"

/**
* print_diagonal - print diagonal \
* @n: number of times to print \
* Return: void
*/
void print_diagonal(int n)
{
int i, j;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 1;i <= n;  i++)
{
j=1;

while (j < i)
{
_putchar(/*'_'*/' ');
j++;
}
_putchar(92);
_putchar('\n');
}

}
}
