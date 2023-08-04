#include "lists.h"
/**
 * add_nodeint_end - add a node to the end of the list
 *  @head: pointer to first element in the list
 *  @n:  new pointer data to insert in
 *  Return: pointer to the new element or NULL if it fails
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp, *new;

temp = *head;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (*head == NULL)
{
*head = new;
return (*head);
}
while (temp->next != NULL)
temp = temp->next;
temp->next = new;
return (new);
}
