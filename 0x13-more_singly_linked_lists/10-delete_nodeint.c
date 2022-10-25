#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node
 * @head: head of a list
 * @index: position
 * Return: 1 if pass -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *nxt;

	prev = *head;
	while (prev && prev->n != index)
	{
		nxt = prev;
		prev = prev->next;
	}

	if (prev)
	{
		if (prev == *head)
		{
			*head = (*head)->next;
		}
		else
		{
			nxt->next = prev->next;
			free(prev);
		}
	}
	return (1);
}
