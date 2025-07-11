#include "dog.h"
#include <stdio.h>
#include <stddef.h> /* for NULL */
#include <stdlib.h> /* for malloc & free */

/**
 * _strlen - calculates length of strung
 * @s - pointer to string
 * Return: length of string as int
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter = counter + 1;
		s = s + 1;
	}
	return (counter);
}

/**
 * new_dog - creates a new dog
 * @name: pointer to dog name
 * @age: age of dog
 * @owner: pointer to dog owner
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int namelength, ownerlength, totallength, i, j;
	char *stringmemory;
	dog_t *dog1;

	dog1 = (dog_t *)malloc(sizeof(dog_t)); /* malloc struct instance */

	if (dog1 == NULL) /* check if malloc failed */
	{
		return (NULL);
	}

	namelength = _strlen(name); /* find length of name string */
	ownerlength = _strlen(owner); /* find length of owner string */
	totallength = namelength + ownerlength + 2; /* calc total length */

	stringmemory = malloc(totallength); /* malloc for strings */

	if (stringmemory == NULL) /* check if malloc failed */
	{
		return (NULL);
	}

	while (name[j] != '\0') /* copy name to heap memory */
	{
		stringmemory[i] = name[j];
		i++;
		j++;
	}
	stringmemory[i] = '\0';
	j = 0;

	while (owner[j] != '\0') /* copy owner to heap memory */
	{
		stringmemory[i] = owner[j];
		i++;
		j++;
	}
	stringmemory[i] = '\0';

	return (dog1); /* return pointer to new dog */
}
