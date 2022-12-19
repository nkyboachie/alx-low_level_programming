#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that print n, elements of an integer
 * @n: element number
 * @a: array
 * Return: input
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
printf(", ");
}
printf("\n");
}
