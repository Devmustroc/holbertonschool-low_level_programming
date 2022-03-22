#include "lists.h"
/**
 * insert_nodeint_at_index - isert a node in a given position.
 * @head: pointer to the first node.
 * @idx: index of list where the position of the new node must be add.
 * @n: data of the new node.
 * Return: the & of the new node else NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (head == NULL && idx != 0)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head;
	i = 0;
	while (temp)
	{
		if ((i + 1) == idx)
		{
			new->next = tmp->next;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	free(new);
	return (NULL);
}
