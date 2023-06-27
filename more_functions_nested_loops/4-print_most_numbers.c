#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print the numbers except 2 and 4
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
		{
			putchar(num + '0');
		}
	}

	putchar('\n');
}
