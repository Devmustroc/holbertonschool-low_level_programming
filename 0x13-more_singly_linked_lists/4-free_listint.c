#include "list.h"
/**
 * free_listint - frees a listint-t list.
 * @head: pointer to first node.
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
}
