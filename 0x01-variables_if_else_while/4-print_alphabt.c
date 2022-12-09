#include <stdio.h>
/**
*main - prints alphabetic characters in lower case except e & q
*
*Return: Always 0
*/
int main(void)
{
int hi;
for (hi = 97 ;  hi <= 122; hi++)/*ascii values a-z*/
{
if (hi != 'q' && hi != 'e')
{
putchar(hi);
}
}
putchar('\n');
return (0);
}
