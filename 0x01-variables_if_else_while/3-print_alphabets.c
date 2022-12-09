#include <stdio.h>
/**
*main - prints alphabetic characters in lower case and uppercase
*
*Return: Always 0
*/
int main(void)
{
int hi;
for (hi = 97; hi <= 122; hi++)/*ascii values a-z*/
{
putchar(hi);
}
for (hi = 65; hi <= 90; hi++)/*ascii values A-Z*/
{
putchar(hi);
}
putchar('\n');
return (0);
}
