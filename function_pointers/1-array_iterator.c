#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - A function that executes a function given as a parameter
 * @array: First paramter
 * @size: Second parameter
 * @action: Third parameter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
