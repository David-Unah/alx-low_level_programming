#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * 
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int dist;
	listint_t *trial;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dist= *h - (*h)->next;
		if (dist > 0)
		{
			trial= (*h)->next;
			free(*h);
			*h = trial;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
