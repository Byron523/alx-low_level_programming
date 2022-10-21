#include "lists.h"

/**
 * add_node - adds node at the beginning
 * @head: head of a linked list
 * @str: input string to be added
 * Return: address of a new item
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s;
	size_t n;
	list_t *new_node;

	new_node = malloc(sizeof(struct list_s));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	s = strdup(str);

	for (n = 0; str[n]; n++)
		;
	new_node->len = n;
	new_node->str = s;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
