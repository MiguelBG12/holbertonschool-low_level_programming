#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse
 *
 * @s: String to be checked
 *
 * Return: void
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
	}
}
