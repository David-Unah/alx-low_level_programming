#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - this will count the number of unique nodes
 *
 * Return: If the list is not looped - 0.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *bricks, *hood;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	bricks= head->next;
	hood= (head->next)->next;

	while (hood)
	{
		if (bricks == hood)
		{
			bricks= head;
			while (bricks != hood)
			{
				nodes++;
				bricks= bricks->next;
				hood= hood->next;
			}

			bricks= bricks->next;
			while (bricks != hood)
			{
				nodes++;
				bricks= bricks->next;
			}

			return (nodes);
		}

		bricks= bricks->next;
		hood= (hood->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
