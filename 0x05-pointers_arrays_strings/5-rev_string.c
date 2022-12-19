#include "main.h"

/**
 * rev_string -reverses a string.
 *@s: the string to reverse
 */
void rev_string(char *s)
{
int k;
int i = 0;
char reverse = s[0];

while (s[i] != '\0')
i++;
for (k = 0; k < i; k++)
{
i--;
reverse = s[k];
s[k] = s[i];
s[i] = reverse;
}
}
