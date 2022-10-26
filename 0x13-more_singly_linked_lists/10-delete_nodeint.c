#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes a node at a designated index
 * @head: Pointer to the beginning of the list
 * @index: Index of the node to be freed
 * Return: 1 if susccessful, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tmp, *copy = *head;
unsigned int node;

if (copy == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(copy);
return (1);
}

for (node = 0; node < (index - 1); node++)
{
if (copy->next == NULL)
return (-1);

copy = copy->next;
}

tmp = copy->next;
copy->next = tmp->next;
free(tmp);
return (1);
}
