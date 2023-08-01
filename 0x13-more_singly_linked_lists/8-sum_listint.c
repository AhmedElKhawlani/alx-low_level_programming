#include "lists.h"

/**
 * sum_listint - calculates the sum of all the nodes' data
 * @head: head of the linked list
 *
 * Return: The sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp_node = head;

	while (temp_node)
	{
		sum += (*temp_node).n;
		temp_node = (*temp_node).next;
	}

	return (sum);
}
