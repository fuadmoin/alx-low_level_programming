#include "lists.h"

/**
 * list_len - return the number of elements of a list_t list
 * @h: pointer to the list_t list
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
size_t nodes = 0;
while (h != NULL)
{
h = h->next;
nodes++;
}
return (nodes);
}
