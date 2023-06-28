#include "main.h"

void print_number(int n);
void print_int_recursion(unsigned int n);
int _atoi(char *s);
void print_error(void);

/**
 * main - Write a program that adds positive numbers.
 * @argc: Number of arguments passed to the program.
 * @argv: Array of strings. Each is one of the arguments that was passed.
 *
 * Description: Print the result, followed by a new line.
 * If no number is passed to the program, print 0, followed by a new line.
 * If one of the number contains symbols that are not digits, print Error,
 * followed by a new line, and return 1.
 * Return: Zero.
 */
int main(int argc, char *argv[])
{
	int i, j, res = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				print_error();
				return (1);
			}
		}
		res += _atoi(argv[i]);
	}
	print_number(res);
	putchar('\n');
	return (0);
}

/**
 * _atoi - Function that convert a string to an integer.
 * @s: String to be converted into integer.
 *
 * Description: Function that convert a string to an integer.
 * Function created for Task 10 on Project pointers_arrays_strings.
 * Return: Integer.
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
		putchar('0');
		return;
	}
	if (n < 0)
	{
		putchar('-');
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
		putchar('0' + number % base);
	}
}

/**
 * print_error - Prints error message
 *
 * Description: Print each letter one by one followed by \n
 * Return: void
 */
void print_error(void)
{
	putchar('E');
	putchar('r');
	putchar('r');
	putchar('o');
	putchar('r');
	putchar('\n');
}

