#include <stdio.h>

/**
 * main - Prints sum of Fibonacci numbers terms less than 4000000
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long fibon1 = 0, fibon2 = 1, sum;
float sum1;

while (1)
{
sum = fibon1 + fibon2;
if (sum > 4000000)
break;
if ((sum % 2) == 0)
sum1 += sum;

fibon1 = fibon2;
fibon2 = sum;
}
printf("%.0f\n", sum1);
return (0);
}
