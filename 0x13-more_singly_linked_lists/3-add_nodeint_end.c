#include "lists.h"

/**
 * add_nodeint_end - Adds new node
 * @head: Pointer to the head of the linked list.
 * @n: The value to be stored in the new node.
 * Return: Address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node;

node = malloc(sizeof(listint_t));
if (node == NULL)
return (NULL);

node->n = n;
node->next = NULL;
if (*head == NULL)
*head = node;
else
{
listint_t *current = *head;

while (current->next != NULL)
current = current->next;
current->next = node;
}
return (node);
}
