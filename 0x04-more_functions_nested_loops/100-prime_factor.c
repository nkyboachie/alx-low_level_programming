/*
 * File: 100-prime_factor.c
 * Auth: Yiadom
 */

#include <stdio.h>

/**
 * main - finds and prints the largest
 * prime factor of the number
 * 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
    long prime = 612852475143, div = 2;

    while (div < (prime / 2))
    {
        if ((prime % div) == 0)
        {
            prime /= div;
        }
        else
        {
            div++;
        }
    }

    printf("%ld\n", prime);

    return (0);
}