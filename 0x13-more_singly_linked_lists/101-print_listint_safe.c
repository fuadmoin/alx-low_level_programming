#include "lists.h"

/**
 * calculate_loop_length - Counts the number of unique nodes
 * @list_head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t calculate_loop_length(const listint_t *list_head)
{
const listint_t *slow_ptr, *fast_ptr;
size_t node_count = 1;

if (list_head == NULL || list_head->next == NULL)
return (0);

slow_ptr = list_head->next;
fast_ptr = (list_head->next)->next;

while (fast_ptr)
{
if (slow_ptr == fast_ptr)
{
slow_ptr = list_head;
while (slow_ptr != fast_ptr)
{
node_count++;
slow_ptr = slow_ptr->next;
fast_ptr = fast_ptr->next;
}

slow_ptr = slow_ptr->next;
while (slow_ptr != fast_ptr)
{
node_count++;
slow_ptr = slow_ptr->next;
}

return (node_count);
}

slow_ptr = slow_ptr->next;
fast_ptr = (fast_ptr->next)->next;
}

return (0);
}

/**
 * print_list_safe - Prints a listint_t list safely.
 * @list_head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t node_count, counter = 0;

node_count = calculate_loop_length(head);

if (node_count == 0)
{
for (; head != NULL; node_count++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else
{
for (counter = 0; counter < node_count; counter++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (node_count);
}
