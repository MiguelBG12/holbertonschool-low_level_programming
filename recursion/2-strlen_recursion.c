#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string to be checked
 * Return: The length of the string
 *
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (0);
	}

	s++;
	count = _strlen_recursion(s) + 1;

	return (count);
}
