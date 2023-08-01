#include "lists.h"
/**
 *listint_len - returns the number of elements in
 *a linked list
 *@h: pointer linked list of type listint_t
 *Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h)
{
h = h->next;
count++;
}
return (count);
}
