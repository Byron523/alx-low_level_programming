#include "lists.h"

/**
 * insert_nodeint_at_index - inserting a node
 * @head: head of a list
 * @idx: index positito
 * @n: itme to be put
 * Return: address of a new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *tmp;

	tmp = *head;
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && tmp != NULL; i++)
		{
			tmp = tmp->next;
		}
	}

	if (tmp == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}

	return (new);
}
