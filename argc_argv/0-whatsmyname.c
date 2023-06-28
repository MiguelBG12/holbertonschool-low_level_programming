#include "main.h"

/**
 * main - program to print its name
 * @argc: Number of arguments passed to the program
 * @argv: Arry of strings. Each is one of the arguments that was passed
 * If you rename the program, it will print the new name
 * Return: Zero
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
