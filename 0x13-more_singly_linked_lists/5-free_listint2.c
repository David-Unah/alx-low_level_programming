#include "lists.h"

/**
 * free_listint2 - this will free a linked list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *trial;

	if (head == NULL)
		return;

	while (*head)
	{
		trial= (*head)->next;
		free(*head);
		*head = trial;
	}

	*head = NULL;
}
