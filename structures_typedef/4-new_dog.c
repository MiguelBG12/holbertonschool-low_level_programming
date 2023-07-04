#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - separate memory address
 * @name: first parameter
 * @age: secontd parameter
 * @owner: tercer parameter
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int lowner, lname, i, j;
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
	{
		return (NULL);
	}

	lowner = strlen(owner);
	lname = strlen(name);
	newdog->name = malloc(lname + 1);
	newdog->owner = malloc(lowner + 1);

	if (newdog->name == NULL || newdog->owner == NULL)
	{
		free(newdog);
		free(newdog->name);
		free(newdog->owner);
		return (NULL);
	}

	for (i = 0; i < lname + 1; i++)
	{
		newdog->name[i] = name[i];
	}
	newdog->age = age;

	for (j = 0; j < lowner + 1; j++)
	{
		newdog->owner[j] = owner[j];
	}

	return (newdog);
}
