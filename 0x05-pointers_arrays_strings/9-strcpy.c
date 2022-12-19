#include "main.h"

/**
 * *_strcpy - copies the string pointed
 *  to by src, including the
 * terminating null byte (\0),
 *  to the buffer pointed to by dest.
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, const char *src)
{
char *p = dest;
while ((*p++ = *src++) != '\0');
return dest;
}
