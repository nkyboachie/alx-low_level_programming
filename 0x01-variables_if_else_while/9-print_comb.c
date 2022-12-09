#include <stdio.h>
/**
*main - print 0, 1, 2, 3, 4, 5, 6, 7, 8, 9$ combinations
*
*Return: Always 0
*/
int main(void)
{
int ch;
for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
if  (ch == '9')
{
putchar('$');
}
else
{
putchar(',');
putchar(' ');
}
}
return (0);
}
