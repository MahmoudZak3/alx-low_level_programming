#include "lists.h"
/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp = head;
unsigned int count = 0;

if (head == NULL)
return (NULL);
while (count < index)
{
count++;
temp = temp->next;
if (temp == NULL)
return (NULL);
}
return (temp);
}
