#include <stdio.h>
#include "dog.h"

/**
 * init_dog -  initialize a variable
 * @d: name the struct
 * @name: name the dog
 * @age: how old is the dog
 * @owner: owner the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
