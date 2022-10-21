#include "lists.h"
/**
 * free_list - frees a list
 * @head: head of a linked list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *freee;

	while ((freee = head) != NULL)
	{
		freee = head->next;
		free(freee->str);
		free(freee);
	}
}
