#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - positive or negative
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* start code */
if (n > 0)/*condition*/
{
printf("%d is positive\n", n);/* prints is positive*/
}
else if (n == 0)/* condition */
{
printf("%d is zero\n", n); /*prints is zero */
}
else if (n < 0) /* condition */
{
printf("%d is negative\n", n); /*prints is negative*/
}
else /* condition */
printf("invalid value\n"); /*prints is invalid value*/
return (0);
}
