#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
* main - Last digit of the number
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* start code */

last_digit = n % 10;
if (last_digit > 5) /* greater than 5*/
{
printf("Last digit of %d is %d is greater than 5 and is greater than 5\n", n, last_digit);
}
else if (last_digit == 0)/* equal to zero*/
{
printf("Last digit of %d is %d and is 0\n", n, last_digit);
}
else if (last_digit < 6 && last_digit != 0) /* less than 0*/
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
}
else
printf("not a valid value");
return (0);

}
