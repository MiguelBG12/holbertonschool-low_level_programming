#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: prints the comma
 * @n: the numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	const char *alm;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		alm = va_arg(ap, const char *);

		if (alm != NULL)
		{
			printf("%s", alm);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && i < n - 1)
		{																printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
