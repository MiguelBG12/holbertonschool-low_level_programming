#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function copies string pointed to by src
 * @dest: pointer objetive
 * @src: pointer initial data
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}
