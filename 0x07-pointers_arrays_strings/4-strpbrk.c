 #include "main.h"

/**
 * _strpbrk - a function that searches a string
 * @s: string
 * @accept: matches byte in s
 * Return: accept or NULL if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; a++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return ('\0');
}
