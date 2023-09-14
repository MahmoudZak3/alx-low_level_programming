#include "lists.h"

/**
 * get_dnodeint_at_index  -  a new node at the beginning of a dlistint_t list.
 * @head: pointer to the head list.
 * @index:  integer for the new node to contain.
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
