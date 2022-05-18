#include "lists.h"
/**
 * reverse_listint - function that reverse a linked list
 * @head: pointer to head pointer of linked list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *link;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);
	prev = *head;
	link = prev->next;
	*head = link->next;

	prev->next = NULL;

	while ((*head)->next != NULL)
	{
		link->next = prev;
		prev = link;
		link = (*head);
		*head = (*head)->next;
	}

	(*head)->next = link;
	link->next = prev;
	return (*head);
}
