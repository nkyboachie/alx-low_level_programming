#include <stdio.h>
/**
*main - print z-a with only putchar()
*
*Return: Always 0
*/
int main(void)
{
int ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
