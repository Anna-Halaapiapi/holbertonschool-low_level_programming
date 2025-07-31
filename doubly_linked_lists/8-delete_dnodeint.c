#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h> /* for malloc, NULL */

/**
 * delete_at_beginning - deletes node at beginning of list
 * @head: double pointer to head
 *
 * Return: 1 (success) or -1 (fail)
 */

int delete_at_beginning(dlistint_t **head)
{
	dlistint_t *delnode = *head; /* node to be deleted */
	dlistint_t *nextnode; /* node after node to be deleted */

	if (*head == NULL)/* check if list is empty */
	{
		return (-1);
	}

	nextnode = delnode->next; /* store node 2 in nextnode */
	*head = nextnode; /* update head to node 2 */

	if (nextnode != NULL) /* if more than one node in list */
	{
		nextnode->prev = NULL; /* update prev pointer of new node 1 */
	}

	free(delnode); /* free delnode from memory */

	return (1); /* return 1 for success */
}


/**
 * delete_dnodeint_at_index - deletes node at a given position
 * @head: double pointer to head
 * @index: index of list where new node should be deleted (starts at 0)
 *
 * Return: 1 (success) or -1 (fail)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter = 0; /* counter for list traversal */
	dlistint_t *prevnode = *head; /* node prev to node to be deleted */
	dlistint_t *nextnode; /* node after node to be deleted */
	dlistint_t *delnode; /* node to be deleted */

	if (index == 0) /* call helper if deleting first node in list */
	{
		return (delete_at_beginning(head));
	}
	while (counter < (index - 1) && prevnode != NULL) /* find prevnode */
	{
		prevnode = prevnode->next;
		counter = counter + 1;
	}

	if (prevnode == NULL) /* check if index longer than list length */
	{
		return (-1);
	}

	delnode = prevnode->next; /* find node to be deleted */
	nextnode = delnode->next; /* find node after node to be deleted */

	if (nextnode == NULL) /* check if delnode is last */
	{
		prevnode->next = NULL;
	}
       else /* else if delnode is not last */
	{
		prevnode->next = nextnode;
		nextnode->prev = prevnode;
	}

	free(delnode); /* free the node to be deleted from memory */

	return (1); /* return 1 for success */
}
