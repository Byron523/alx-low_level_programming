#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: head of a list
 * @index: the index position
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head != NULL)
	{
		i++;
		if (i != index)
		{
			head = head->next;
		}
	}
	return (head);
}
