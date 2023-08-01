#include "lists.h"

/**
 * pop_listint - deletes the first node of a linked list
 * @head: pointer to the first element of the linked list
 *
 * Return: the data inside the deleted node,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int elt;

	if (!head || !*head)
		return (0);

	elt = (*(*head)).n;
	temp_node = (*(*head)).next;
	free(*head);
	*head = temp_node;

	return (elt);
}

