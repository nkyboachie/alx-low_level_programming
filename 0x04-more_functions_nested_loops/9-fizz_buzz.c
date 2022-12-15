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
int i;
char f[] = "Fizz";
char b[] = "Buzz";
char fb[] = "FizzBuzz";

for (i = 1; i <= 100; i++)
{
if (i == 100)
printf("%s", b);
else if ((i % 3 == 0) && (i % 5 == 0))
printf("%s ", fb);
else if (i % 5 == 0)
printf("%s ", b);
else if (i % 3 == 0)
printf("%s ", f);
else
printf("%d ", i);
}
printf("\n");
return (0);
}
