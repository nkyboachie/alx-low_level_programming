#include <stdio.h>
/**
* main - checks lower case characters
*
* Return: Always (Success)
*/
int _islower(int c)
{
if (c <= 'z' && c >= 'a')
{
return (1);
}
else
return (0);
}
