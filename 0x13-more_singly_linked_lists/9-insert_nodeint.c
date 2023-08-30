#include "lists.h"

/**
 * insert_nodeint_at_index - put a new node in a linked list,
 *
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *trial = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; trial&& i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = trial->next;
			trial->next = new;
			return (new);
		}
		else
			trial= trial->next;
	}

	return (NULL);
}
