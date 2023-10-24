#include "lists.h"

/**
 * free_listint2 - Frees a list_t list.
 * @head: Pointer to a pointer to the head of the linked list.
 * Return: Void.
 */

void free_listint2(listint_t **head)
{
listint_t *node;

if (head == NULL)
return;

node = *head;

while (node != NULL)
{
listint_t *temp = node;

node = node->next;

free(temp);
}

*head = NULL;
}
