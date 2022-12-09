#include "lists.h"

/**
* sum_dlistint - add all data of a linked list
* @head: head of the list
* Return: the sum of values
*/
int sum_dlistint(dlistint_t *head)
{
	int i;

	i = 0;
	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			i += head->n;
			head = head->next;
		}
	}

	return (i);
}
