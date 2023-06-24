#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that checks the uppercase character
 *
 * @c: first operando
 *
 * Return: always 0 success
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
