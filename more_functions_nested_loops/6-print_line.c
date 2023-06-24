#include <stdio.h>
#include "main.h"
/**
 * print_line -Entry point of program
 *@n: parameter of function
 * Return: 0
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			putchar(95);
		}
		putchar('\n');
	}
}
