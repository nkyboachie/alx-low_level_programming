#include "main.h"

/**
 * print_rev - prints a string, in
 * reverse, followed by a new line.
 *@s: the string to reverse
 *
 */
void print_rev(char *s)
{
int reverse = 0;

while (s[reverse] != '\0')
reverse++;
for (reverse--; reverse >= 0; reverse--)
_putchar (s[reverse]);

_putchar('\n');
}
