#include "main.h"

/**
 * puts_half - prints half of a string
 *  followed by a new line.
 * @str: string
 *
 */
void puts_half(char *str)
{
int d = 0;

while (*str != '\0')
{
d++;
str++;
}
str -= (d / 2);
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
