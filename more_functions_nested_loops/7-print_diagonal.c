#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Imprimir una diagonal utilizando '\'
 * @n: Número de veces que se imprimirá la diagonal
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
