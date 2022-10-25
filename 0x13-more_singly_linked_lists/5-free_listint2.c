#include "lists.h"

/**
 * free_listint2 - free form double pointer
 * @head: head of a list
 * Return: nothin
 */
void free_listint2(listint_t **head)
{
	listint_t *new, *tmp;

	if (*head != NULL)
	{
		tmp = *head;
		while ((tmp = new) != NULL)
		{
			tmp = tmp->next;
			free(new);
		}
		*head = NULL;
	}
}
