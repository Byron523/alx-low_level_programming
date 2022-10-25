#include "lists.h"

/**
 * pop_listint - deletes a node
 * @head: head of a liast
 * Return: head of a node
 */
int pop_listint(listint_t **head)
{
	listint_t *newnode, *tmp;
	int i;

	if(*head == NULL)
	{
		return (0);
	}

	newnode = *head;
	i = newnode->n;
	tmp = newnode->next;

	free(newnode);

	*head = tmp;

	return (i);
}
