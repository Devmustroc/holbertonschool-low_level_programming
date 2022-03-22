#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of listint_t ll.
 * @head: pointer to the 1er node.
 * @index: the index of node starting with 0.
 * Return: nth node if exist else NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	i = 0;
	temp = head;
	while (temp)
	{
		if (i == index && temp)
		{
			return (temp);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
