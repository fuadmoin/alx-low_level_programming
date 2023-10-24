#include "lists.h"

/**
 * add_nodeint - Adds new node
 * @head: Pointer to a pointer to the head.
 * @n: Value to be stored in the new node.
 * Return: Address of the new element.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *node;

node = malloc(sizeof(listint_t));
if (node == NULL)
return (NULL);

node->n = n;
node->next = *head;
*head = node;

return (node);
}
