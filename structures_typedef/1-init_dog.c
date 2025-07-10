#ifndef _dog_h_
#define _dog_h_

#include "dog.h"
#include <stdio.h>
#include <stddef.h> /* for NULL */

/**
 * init_dog - initialises a variable of type struct dog
 * @d: pointer to struct dog
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: pointer to dog owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
/* return NULL if any input is NULL */
	if (d == NULL)
	{
		return;
	}
/* initialise variables at struct dog */
	d->name = name;
	d->age = age;
	(*d).owner = owner;
}
#endif /* _dog_h_ */
