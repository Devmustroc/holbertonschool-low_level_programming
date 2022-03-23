#include "lists.h"
/**
 * pop_listint - function that deletes the head node of linked list.
 * @head: pointer to head pointer.
 * Return: returns the head node's data (n), if the list is emty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
