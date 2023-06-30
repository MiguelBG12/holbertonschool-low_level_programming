#include "main.h"
#include <stdio.h>

/**
 * _strlen - function count length of a string
 * @s: pointer of function
 * Return: 0
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;	
	}
	return (length);
}
