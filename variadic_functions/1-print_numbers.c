#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: prints the comma
 * @n: the numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int alm;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		alm = va_arg(ap, int);
		printf("%d", alm);

		if (separator != NULL && i < n - 1)
		{																printf("%s", separator);											}
	}
	printf("\n");
	va_end(ap);
}
