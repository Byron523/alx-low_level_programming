#include "lists.h"

/**
* get_dnodeint_at_index - get a node at a specific index
* @head: head of a list
* @index: the postiton to retrieve the element
* Return: value at the index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	
	while (head->prev != NULL)
		head = head->prev;

	i = 0;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}

	return (head);
}
