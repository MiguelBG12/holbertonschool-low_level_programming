#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values
 * @a: parameter of function
 * @b: argument of function
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
