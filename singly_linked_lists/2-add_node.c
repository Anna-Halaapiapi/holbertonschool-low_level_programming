#include "lists.h"
#include <string.h> /* for strdup & strlen */
#include <stdlib.h> /* for malloc, NULL */

/**
 * _strlen - returns length of a string
 * @s: pointer to string s
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
 * add_node - adds a new node to beginning of list
 * @head: double pointer to head of list
 * @str: pointer to string in node
 *
 * Return: address of new element or NULL (failure)
 */

list_t *add_node(list_t **head, const char *str)
{
	/* malloc for new node */
	list_t *newnode = malloc(sizeof(list_t));

	/* if malloc fails return NULL */
	if (newnode == NULL)
	{
	return (NULL);
	}

	/* duplicate string to newnode */
	newnode->str = strdup(str);

	/* free newnode memory if str is NULL */
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}

	/* set length for new node */
	newnode->len = _strlen(newnode->str);

	/* make newnode's next point to current head */
	newnode->next = *head;

	/* update head to point to new node */
	*head = newnode;

	/* return address of new element */
	return (newnode);
}
