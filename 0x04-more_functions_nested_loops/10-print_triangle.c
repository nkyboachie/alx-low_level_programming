#include "main.h"
/**
 *print_triangle - print a triangle
 *@size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
int i, b, h;

if (size <= 0)
_putchar('\n');
else
{
for (h = 0; h <= (size - 1); h++)
{
for (b = 0; b < (size - 1) - h; b++)
{
_putchar(32);
}
for (i = 0; i <= h; i++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
