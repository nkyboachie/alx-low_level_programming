#include <stdio.h>

/**
 * main - Prints 1st 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int counter = 0;
unsigned long fibon1 = 0, fibon2 = 1, sum, sum1 = 0;

while (sum < 4000000)
{
sum = fibon1 + fibon2;
sum1 += sum;


fibon1 = fibon2;
fibon2 = sum;
if (counter <= 4000000)
continue;
else
counter++;
}
printf("%lu", sum1);
return (0);
}