#include "dog.h"
#include <stdio.h>
#include <stddef.h> /* for NULL */

/**
 * print_dog - prints struct dog
 * @d: pointer to struct dog
 * Return: void
 */

void print_dog(struct dog *d)
{
/* if d is NULL print nothing */
	if (d == NULL)
	{
		return;
	}

/* print struct dog elements */
	if (name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %.1f\n", age);

	if (owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
