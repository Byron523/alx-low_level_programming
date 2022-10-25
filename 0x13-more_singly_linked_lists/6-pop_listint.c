#include "lists.h"

/**
 * pop_listint - deletes a node
 * @head: head of a liast
 * Return: head of a node
 */
int pop_listint(listint_t **head)
{
	listint_t *newnode, *tmp;
	int n;

	if(*head == NULL)
	{
		return (0);
	}

	newnode = *head;
	n = newnode->n;
	tmp = newnode->next;

	free(tmp);

	*head = tmp;

	return (n);
}
