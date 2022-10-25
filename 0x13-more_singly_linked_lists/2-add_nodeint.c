#include "lists.h"

/**
 * add_nodeint - add node at the beginning
 * @head: the head of the linked list
 * @n: nth element
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (head != NULL)
	{
		new->next = *head;
		*head = new;
	}
	return (*head);
}
