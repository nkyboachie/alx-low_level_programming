#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints sum of two diag of a square matrix
 * @size: size
 * @a: integer
 */
void print_diagsums(int *a, int size)
{
int i, u1 = 0, u2 = 0;

for (i = 0; i < size; i++)
{
u1 += a[i];
a += size;
}
a -= size;

for (i = 0; i < size; i++)
{
u2 += a[i];
a -= size;
}
printf("%d, %d\n", u1, u2);
}
