#include "lists.h"
#include <string.h> /* for strdup */
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
 * add_node_end - adds a new node to end of list
 * @head: double pointer to head of list
 * @str: pointer to string in node
 *
 * Return: address of new element or NULL (failure)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *end;

	newnode = malloc(sizeof(list_t)); /* malloc space for new node */

	if (newnode == NULL) /* if malloc fails return NULL */
	{
		return (NULL);
	}

	newnode->str = strdup(str); /* copy str to newnode */

	if (newnode->str == NULL) /* free newmode if str is NULL */
	{
		free(newnode);
		return (NULL);
	}

	newnode->len = _strlen(newnode->str); /* set length for newnode */
	newnode->next = NULL; /* point newnode to NULL to mark end of list */

	if (*head == NULL) /* handle empty string, make newnode the last node */
	{
		*head = newnode;
		return (newnode);
	}
	else
	{
	end = *head; /* end points to first node on list */

	while (end->next != NULL) /* traverse list to the end */
	{
		end = end->next;/* point end to next node */
	}
	}

	end->next = newnode; /* add newnode to end of list */

	return (newnode); /* return address of new element */
}
