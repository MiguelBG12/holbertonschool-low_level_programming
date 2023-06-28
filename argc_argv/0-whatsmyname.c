#include "main.h"

/**
 * main - Write a program that prints its name
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings. Each is one of the arguments that was passed
 *
 * Description: If you rename the program, it will print the new name
 * without having to compile it again
 * Return: Zero
 */
int main(int argc __attribute__((unused)), char *argv[])
{
		int i = 0;

		while (argv[0][i] != '\0')
		{
			putchar(argv[0][i]);
			i++;
		}
		putchar('\n');
		return (0);
}
