#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: head
 * Return: value
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		free(head);
		head = tmp->next;
	}
}
