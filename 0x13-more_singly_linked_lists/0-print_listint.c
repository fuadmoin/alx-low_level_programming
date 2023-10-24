#include "lists.h"

/**
 * print_elements - Prints all the elements of a listint_t list.
 * @h: pointer to the head of the list.
 * Return: the number of nodes in the list.
 */

size_t print_elements(const listint_t *h)
{
size_t count = 0;
const listint_t *current_node = h;

for (; current_node != NULL; count++)
{
printf("%d\n", current_node->n);
current_node = current_node->next;
}

return (count);
}
