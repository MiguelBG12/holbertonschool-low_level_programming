#include "main.h"

/**
 * _isdigit - check a digit (0-9)
 * @c: parameter
 *
 * Return: Always 0 success
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
