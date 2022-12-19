#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - a function that converts strings to integer
 * @s: string to convert
 * Return: output
 */
int _atoi(char *s)
{
int i = 1;
unsigned int number = 0;

{
if (*s == '-')
i *= -1;
else if (*s >= '0' && *s <= '9')
number = (number * 10) + (*s - '0');
else if (number > 0)
return (1);
}	while (*s++);
return (number * i);
}
