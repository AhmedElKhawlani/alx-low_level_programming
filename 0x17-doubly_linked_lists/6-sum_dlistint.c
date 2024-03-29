#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a doubly linked list
 * @head: head of the doubly linked list
 * Return: sum of the data in the doubly linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int s;

	s = 0;
	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			s += head->n;
			head = head->next;
		}
	}

	return (s);
}
