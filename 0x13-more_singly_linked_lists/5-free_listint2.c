#include "lists.h"

/**
 * free_listint2 - free form double pointer
 * @head: head of a list
 * Return: nothin
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return;
	}

	while (*head != NULL)
	{
		new = *head;
		*head = new->next;
		free(new);
	}
}
