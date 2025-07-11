#include "dog.h"
#include <stdio.h>
#include <stddef.h> /* for NULL */

/**
 * new_dog - creates a new dog
 * @name: pointer to dog name
 * @age: age of dog
 * @owner: pointer to dog owner
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
/* declare var of type dog_t */
	dog_t dog1;

/* assign values to members */
	dog1.name = name;
	dog1.age = age;
	dog1.owner = owner;

	return (dog1);
}
