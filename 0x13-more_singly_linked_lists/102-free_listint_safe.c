#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
size_t length = 0;
int difference;
listint_t *temp_node;

if (!h || !*h)
return (0);

while (*h)
{
difference = *h - (*h)->next;
if (difference > 0)
{
temp_node = (*h)->next;
free(*h);
*h = temp_node;
length++;
}
else
{
free(*h);
*h = NULL;
length++;
break;
}
}

*h = NULL;

return (length);
}
