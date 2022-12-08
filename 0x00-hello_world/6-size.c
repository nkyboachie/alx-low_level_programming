
#include <stdio.h>

/**
 * main - size of the types
 *
 * Return: Always 0 (Success)
 */



int main(void)
{
/*local variable declaration*/
char any_char;
int any_int;
long int any_long;
long long int any_longlong;
float any_float;


printf("Size of a char: %zu bytes(s)", sizeof(any_char));
printf("Size of an int: %zu bytes(s)", sizeof(any_int));
printf("Size of a long int: %zu bytes(s)", sizeof(any_long));
printf("Size of a long long int: %zu bytes(s)", sizeof(any_longlong));
printf("Size of a float: %zu byte(s)", sizeof(any_float));

return (0);
}
