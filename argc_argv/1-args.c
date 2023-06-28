#include "main.h"

void print_number(int n);
void print_int_recursion(unsigned int n);
/**
 * main - Write a program that prints the number of arguments
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings. Each is one of the arguments that was passed
 *
 * Description: Prints argc - 1
 * Return: Zero
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int num;

	num = argc - 1;
	print_number(num);
	_putchar('\n');
	return (0);
}

/**
 * print_number - Write a function that prints an integer.
 * @n: Int to be printed.
 *
 * Description: You can only use _putchar function to print.
 * Function created for Task 12 on Project more_functins_nested_loops.
 * Return: void
 */
void print_number(int n)
{
	unsigned int num;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	if (n > 0)
		num = n;
	print_int_recursion(num);
}

/**
 * print_int_recursion - Prints an integer using recursion.
 * @num: Int to be printed.
 *
 * Description: You can only use _putchar function to print.
 * Function created for Task 12 on Project more_functins_nested_loops.
 * Return: void
 */
void print_int_recursion(unsigned int num)
{
	unsigned int number = num;
	unsigned int base = 10;

	if ((number / base == 0) && (number % base == 0))
	{
		return;
	}
	else
	{
		print_int_recursion(number / base);
		putchar('0' + number % base);
	}
}
