#include <stdio.h>

/**
* main - alphabets 10x
*
* return 0
*/
void print_alphabet_x10(void)
{
int j;
int i;

j = 0;

while (j < 10)
{
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
j++;
}

return;
}
