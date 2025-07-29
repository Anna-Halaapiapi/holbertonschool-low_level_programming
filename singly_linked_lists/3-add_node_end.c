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

/* check if str is NULL first */
	if (str == NULL)
	{
		return (NULL);
	}

/* allocate memory for new node */
	newnode = malloc(sizeof(list_t));

/* if malloc fails return NULL */
	if (newnode == NULL)
	{
		return (NULL);
	}

/* copy str to newnode */
	newnode->str = strdup(str);

/* set length for newnode */
	newnode->len = _strlen(newnode->str);

	end = head;

/* point to old first node */
	while (end->next != NULL)
	{
		end = end->next;
	}

/* point first to new first node */
	end->next = newnode;

/* return address of new element */
	return (newnode);
}
