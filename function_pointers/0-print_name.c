#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - Unction that prints a name
 * @name: First parameter
 * @f: Second  parameter
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
