#include "lists.h"

/**
 * sum_listint - calculates the sum of data
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *trial = head;

	while (trial)
	{
		sum += trial->n;
		trial= trial->next;
	}

	return (sum);
}
