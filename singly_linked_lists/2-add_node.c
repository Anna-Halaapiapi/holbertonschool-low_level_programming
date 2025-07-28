#include "lists.h"
#include <string.h> /* for strdup */
#include <stdlib.h> /* for malloc, NULL */

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
	list_t *link = malloc(sizeof(list_t));

	link->str = str;

	/* if malloc fails */
	if link == NULL
	{
	return (NULL);
	}
	/* point it to the old first node */
	link->next = head;

	/* point first to new first node */
	head = link;

	return (link);
}
