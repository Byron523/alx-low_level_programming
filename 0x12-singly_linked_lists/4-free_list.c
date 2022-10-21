#include "lists.h"
/**
 * free_list - frees a list
 * @head: head of a linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *freee;

	while (head != NULL)
	{
		freee = head->next;
		free(head);
		*head = freee;
	}
}
