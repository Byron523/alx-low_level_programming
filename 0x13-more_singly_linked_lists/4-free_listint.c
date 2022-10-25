#include "lists.h"

/**
 * free_listint - frees memory
 * @head: head of a list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head->next;
		free(head);
		head = new;
	}

}
