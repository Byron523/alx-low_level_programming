#include "lists.h"

/**
* delete_dnodeint_at_index - deletes node
* @head: head of a list
* @index: index to be deleted
* Return: 1, -1 otherwise
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1, *h2;
	unsigned int i;

	h1 = *head;
	if (h1 != NULL)
		while (h1->prev != NULL)
			h1 = h1->prev;

	i = 0;
	while (h1 != NULL)
	{
		if (i == NULL)
		{
			if (i == index)
			{
				*head = h1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h1->next;
				if (h1->next != NULL)
					h1->next->prev = h2;
			}

			free(h1);
			return (1);
		}
		h2 = h1;
		h1 = h1->next;
		i++;
	}

	return (-1);
}
