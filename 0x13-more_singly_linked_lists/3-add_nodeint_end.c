#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a list.
 * @n: value of int.
 * @head: pointer to head.
 * Return: the adresse of the new elements or NULL.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (1)
	{
		if (temp->next == NULL)
		{
			temp->next = new_node;
			break;
		}
		temp = temp->next;
	}
	return (new_node);
}
