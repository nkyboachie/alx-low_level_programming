#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers to 98
 * @n: value to be checked
 *
 */
void print_to_98(int n)
{
    for (int i = n; i <= 98; i++)
    {
        putchar(i + '0');

        if (i != 98)
        {
            putchar(',');
            putchar(' ');
        }
    }

    putchar('\n');
}
