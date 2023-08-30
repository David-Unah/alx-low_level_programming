#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node linked list at a certain index
 *
 *
 *
 * Return: 1 if it succeeded, or -1 if is fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *trial = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(trial);
		return (1);
	}

	while (i < index - 1)
	{
		if (!trial || !(trial->next))
			return (-1);
		trial= trial->next;
		i++;
	}


	current = trial->next;
	trial->next = current->next;
	free(current);

	return (1);
}
