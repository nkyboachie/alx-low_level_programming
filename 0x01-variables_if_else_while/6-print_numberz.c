#include <stdio.h>
/**
*main - print 1-10 with only putchar()
*
*Return: Always 0
*/
int main(void)
{
int ch;
for (ch = 0; ch < 10; ch++)
{
putchar(ch + '0');
}
putchar('\n');
return (0);
}
