#include "lists.h"
/**
 *add_dnodeint_end- add node at the end of a double linked list
 *@head: pointer to head of a Double Linked list
 *@n: data to store in a Linked list
 *@return adresse of new pointer.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *b, *temp;

	b = malloc(sizeof(dlistint_t));
	b->next = b->prev = NULL;
	b->n = n;

	if (b == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = b;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		b->prev = temp;
		temp->next = b;
	}
	return (b);
}
