#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print the numbers from 1 to 9
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}

	putchar('\n');

}
