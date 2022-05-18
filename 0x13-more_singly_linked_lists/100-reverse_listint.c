#include "lists.h"
/**
 * reverse_listint - function that reverse a linked list
 * @head: pointer to head pointer of linked list
 *
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old, *tmp;

	if (*head == NULL)
		return (NULL);
	if ((*(head))->next == NULL)
		return (*head);
	old = *head;
	*head = NULL;
	while (old != NULL)
	{
		tmp = old->next;
		old->next = *head;
		*head = old;
		old = tmp;
	}
	return (*head);
}

