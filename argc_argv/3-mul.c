#include "main.h"

void print_number(int n);
void print_int_recursion(unsigned int n);
int _atoi(char *s);
/**
 * main - Write a program that multiplies two numbers
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings. Each is one of the arguments that was passe.
 *
 * Description: Your program should print the result of multiplication
 * Assume that the two numbers and result can be stored in integer
 * If the program does not receive two arguments, print Error
 * Return: Zero
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		print_number(_atoi(argv[1]) *  _atoi(argv[2]));
		_putchar('\n');
	}
	else
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
	}
	return (0);
}


/**
 * _atoi - Function that convert a string to an integer
 * @s: String to be converted into integer
 *
 * Description: Function that convert a string to an integer
 * Function created for Task 10 on Project pointers_arrays_strings
 * Return: Integer
 */
int _atoi(char *s)
{
	int i, j, n, m;

	i = n = 0;
	m = 1;

	while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
	{
		if (*(s + i) == '-')
			m *= -1;
		i++;
	}

	j = i;
	while ((*(s + j) >= '0') && (*(s + j) <= '9'))
	{
		n = n * 10 + m * (*(s + j) - '0');
		j++;
	}

	return (n);
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
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
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
		_putchar('0' + number % base);
	}
}
