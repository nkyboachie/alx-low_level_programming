#include <stdio.h>
/**
*main - print z-a with only putchar()
*
*Return: Always 0
*/
int main(void)
{
int ch;
int hc;
for (ch = 0; ch < 10; ch++)
{
putchar(ch + '0');
}
for (hc = 97; hc < 102; hc++)
{
putchar(hc);
}

putchar('\n');
return (0);
}
