#include <stdio.h>

/**
 * main - Prints all arguments it receives.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int argument;

	for (argument = 0; argument < argc; argument++)
		printf("%s\n", argv[argument]);

	return (0);
}
