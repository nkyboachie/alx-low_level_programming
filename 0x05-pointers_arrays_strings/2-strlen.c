#include "main.h"

/**
* _strlen - returns the length of a string.
* @s: the lenght of the string
*Return: the length of the string
*/

int _strlen(char *s)
{
int number;
int lenght = 0;

for (number = 0; s[number] != '\0';number++)
{
lenght++;
}

return (lenght);

}
