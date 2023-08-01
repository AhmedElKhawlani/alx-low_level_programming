#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node at a certain index, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp_node = head;

	while (temp_node && i < index)
	{
		temp_node = (*temp_node).next;
		i++;
	}
	if (temp_node)
	{
		return temp_node;
	} 
	else 
	{
		return NULL;
	}
}
