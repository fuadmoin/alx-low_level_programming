#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current_node = *head;
listint_t *next_node = NULL;
unsigned int counter = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(current_node);
return (1);
}

while (counter < index - 1)
{
if (!current_node || !(current_node->next))
return (-1);
current_node = current_node->next;
counter++;
}

next_node = current_node->next;
current_node->next = next_node->next;
free(next_node);

return (1);
}
