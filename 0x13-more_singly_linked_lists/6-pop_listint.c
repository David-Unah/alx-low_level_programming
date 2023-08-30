#include "lists.h"

/**
 * pop_listint - this will delete the head node of a linked list
 *
 * Return: if the linked list is empty return 0

 */
int pop_listint(listint_t **head)
{
	listint_t *trial;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	trial= (*head)->next;
	free(*head);
	*head = trial;

	return (num);
}
