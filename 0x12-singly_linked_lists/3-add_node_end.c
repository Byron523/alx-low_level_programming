#include "lists.h"

/**
 * add_node_end - add a node to the edn
 * @head: head of a linked list
 * @str: string to be ended
 * Return: address of head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *end_done;
	size_t n;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	
	for (n = 0; str[n]; n++)
		;

	new_node->len = n;
	new_node->next = NULL;
	end_node = *head;

	if (end_node == NULL)
		*head = new_node;
	else
	{
		while (end_node->next != NULL)
			end_node = end_node->next;
		end_node->next = new_node;
	}
	return (*head);
}
