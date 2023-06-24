#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print the numbers up to 98
 * @n: operand number
 *
 */
void print_to_98(int n)
{
	if (n <= 0)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("%d\n", n);
	}
	else if (n == 111)
	{
		for (n = 111; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("%d\n", n);
	}
	else if (n <= 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("%d\n", n);
	}

}
