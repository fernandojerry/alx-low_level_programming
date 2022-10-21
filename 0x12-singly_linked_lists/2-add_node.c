#include "lists.h"

/**
 * add_node - Creates a node and adds it to a linked list
 * @head: Pointer to head of the linked list
 * @str: String to assigned to the node
 * Return: Pointer to the head of the linked list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t n;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new_node->len = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
