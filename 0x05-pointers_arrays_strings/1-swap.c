#include "main.h"

/**
 * swap_int - swaps the values of a & b
 * @a: first value
 * @b: second value
 * Return: swapped values
*/
void swap_int(int *a, int *b)
{
int temporary = *a;

*a = *b;
*b = temporary;

}
