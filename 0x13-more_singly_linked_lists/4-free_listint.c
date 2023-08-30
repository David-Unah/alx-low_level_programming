#include "lists.h"

/**
 * free_listint - this will free any linked list
 * 
 */
void free_listint(listint_t *head)
{
	listint_t *trial;

	while (head)
	{
		trial= head->next;
		free(head);
		head = trial;
	}
}
