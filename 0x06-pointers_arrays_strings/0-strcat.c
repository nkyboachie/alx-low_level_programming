#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @src: source string
 * @dest: destination string
 * Return: destination string (dest)
 */
char *_strcat(char *dest, char *src)
{
int i, lenght = 0;
while (dest[lenght])
{
lenght++;
}

for (i = 0; src[i] != 0; i++)
{
dest[lenght] = src[i];
lenght++;
}

dest[lenght] = '\0';

return (dest);
}
