#include <stdlib.h>
#include <stdio.h>

/**
 * main - print 1-100 multiples of 3 (Fizz)
 * multiples of 5 (Buzz) muliples of 3&5 (FizzBuzz)
 *
 * Return: 0 if successful
 */
int main(void)
{
int  n;
char fb[] = "FizzBuzz";
char f[] = "Fizz";
char b[] = "Buzz";

for (n = 1; n <= 100; n++)
{
if (n == 100)
printf("%s ", b);
else if (n % 3 == 0)
printf("%s ", f);
else if (n % 5 == 0)
printf("%s ", b);
else if ((n % 3 == 0) && (n % 5 == 0))
printf("%s ", fb);
else
printf("%d ", n);
}
printf("\n");
return (0);
}
