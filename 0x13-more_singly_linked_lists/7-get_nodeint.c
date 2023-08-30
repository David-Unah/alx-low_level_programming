#include "lists.h"

/**
 * get_nodeint_at_index -  gives node at a certain index in a linked list
 * 
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *trial = head;

	while (trial && i < index)
	{
		trial= trial->next;
		i++;
	}

	return (trial ? trial: NULL);
}
