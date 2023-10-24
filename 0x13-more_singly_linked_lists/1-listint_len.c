#include "lists.h"

/**
 * listint_len - Returns the number of elements.
 * @h: Pointer to the head of the linked list.
 * Return: Number of elements in linked list.
 */

size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}
