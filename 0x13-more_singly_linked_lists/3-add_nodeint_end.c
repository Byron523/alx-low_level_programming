#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: iput linked list
 * @n: value to be added
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t *head, const int n)
{
	listint_t *new, *newnode;

	new = malloc(sizeof(listint_t));
	if (neww == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		newnode = *head;
		while (newnode->next != NULL)
		{
			newnode = newnode->next;
		}
		newnode->next = new;
	}
	return (*head);
}
