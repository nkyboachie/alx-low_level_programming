#include "main.h"

/**
* _strchr - a funtion that locates character in a string
* @c: character
* @s: string
* Return: NULL if c is not found
*/
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] >= '\0'; i++)
{
if (c == s[i])
return (s + i);
}
return ('\0');
}
