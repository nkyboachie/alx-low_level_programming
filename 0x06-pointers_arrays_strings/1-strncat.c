#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest:destination string
 * @src: source string
 * @n: maximum number of bytes
 * Return: destination string
*/
char *_strncat(char *dest, char *src, int n)
{
int lenght = 0, i;
while (dest[lenght])
{
lenght++;
}
for (i = 0; i < n && src[i]; i++)
{
dest[lenght] = src[i];
lenght++;
}

dest[lenght + n + 1] = '\0';
return (dest);
}
