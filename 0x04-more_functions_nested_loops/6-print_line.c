#include "main.h"

/**
* print_line - prints a line (_)
* Return: void
*/
void print_line(int n)
{
while (n > 0)
{

_putchar('_');

if(n <= 0)
{
_putchar('\n');
}
n--;
}

_putchar('\n');

}
