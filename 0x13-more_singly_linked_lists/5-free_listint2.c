#include "lists.h"
/**
 * free_listint2 - free a linstint_t & set the Head to NULL.
 * @head: pointer to head pointer
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head != NULL && *head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}
