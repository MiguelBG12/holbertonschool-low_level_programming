#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * p_char - print a single character
 * @ap: first parameter
 */
void p_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * p_integer - prints an integer number
 * @ap: first parameter
 */
void p_integer(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * p_float - prints a float
 * @ap: first parameter
 */
void p_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * p_string - print a string of characters
 * @ap: first parameter
 */
void p_string(va_list ap)
{
	char *letter;

	letter = va_arg(ap, char *);
	if (letter == NULL)
	{
		letter = "(nil)";
	}
	printf("%s", letter);
}

/**
 * print_all - choose a function and ka execute
 * @format: first parameter
 */
void print_all(const char * const format, ...)
{
	print_t prints[] = {
	{"c", p_char},
	{"i", p_integer},
	{"f", p_float},
	{"s", p_string},
	{NULL, NULL}
	};

	unsigned int i = 0, j = 0;
	va_list ap;
	char *separator = "";

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (prints[j].p)
		{
			if (format[i] == *prints[j].p)
			{
				printf("%s", separator);
				prints[j].f(ap);
				separator = ", ";
			}
			j++;
		}

		i++;														}

	printf("\n");
	va_end(ap);
}
