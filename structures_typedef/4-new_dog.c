#include "dog.h"
#include <stddef.h> /* for NULL */
#include <stdlib.h> /* for malloc & free */
/**
 * _strlen - calculates length of strung
 * @s: pointer to string
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
 * _strcpy - copies string from src to dest
 * @dest: pointer to string dest
 * @src: pointer to string src
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)

{
	int i;

	for (i = 0; src[i] != '\0' ; i = i + 1)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: pointer to dog name
 * @age: age of dog
 * @owner: pointer to dog owner
 * Return: pointer to new dog or NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int namelength, ownerlength;
	char *namememory, *ownermemory;
	dog_t *dog1;

	if (name == NULL || owner == NULL) /* check for NULL entries */
	return (NULL);
	dog1 = malloc(sizeof(dog_t)); /* malloc the struct */
	if (dog1 == NULL)
		return (NULL);
	namelength = _strlen(name); /* calc string lengths */
	ownerlength = _strlen(owner);
	namememory = malloc(sizeof(char) * (namelength + 1));/*malloc for name*/
	if (namememory == NULL)
	{
		free(dog1);
		return (NULL);
	}
	ownermemory = malloc(sizeof(char) * (ownerlength + 1));/*malloc owner*/
	if (ownermemory == NULL)
	{
		free(namememory);
		free(dog1);
		return (NULL);
	}
	_strcpy(namememory, name);/* copy name and owner to new memory */
	_strcpy(ownermemory, owner);
	dog1->name = namememory;/* assign values */
	dog1->age = age;
	dog1->owner = ownermemory;
	return (dog1); /* return pointer to new dog */
}
