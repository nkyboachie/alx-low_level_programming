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
unsigned long fibon1 = 0, fibon2 = 1, sum;

while (counter < 50)
{
sum = fibon1 + fibon2;
printf("%lu", sum);

fibon1 = fibon2;
fibon2 = sum;

if (counter == 49)
printf("\n");
else
printf(", ");
counter++;
}
return (0);
}
