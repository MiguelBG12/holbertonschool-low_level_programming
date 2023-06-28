#include "main.h"

/**
 * main - Write a program that prints all arguments it receives.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of strings. Each is one of the arguments that was passed.
 *
 * Description: Prints all arguments.
 * Return: Zero.
 */
int main(int argc, char *argv[])
{
	int i, j;

	for (i = 0; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			putchar(argv[i][j]);
			j++;
		}
		putchar('\n');
	}
	return (0);
}
