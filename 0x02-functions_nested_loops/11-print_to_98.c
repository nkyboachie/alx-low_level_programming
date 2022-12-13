#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers to 98
 * @n: value to be checked
 *
 */
void print_to_98(int n)
{
    if (n >= 98)
    {
        for (;n > 98;n--)
            printf("%d, ",n--);
        printf("%d\n", n);
    }

    else
    {
        for (;n < 98;n++)
            printf("%d, ", n++);
        printf("%d\n", n);
    }
}
