#include "dog.h"
#include <stdio.h>

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
	d->name = name;
	d->age = age;
	(*d).owner = owner;
}
