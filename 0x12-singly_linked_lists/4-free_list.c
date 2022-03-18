#include "lists.h"
/**
 *free_list - free a list.
 *@head: Linked list.
 *Return: none.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (1)
	{
		if (head == NULL)
			break;
		tmp = head;
		head = tmp->next;
		free(tmp->str);
		free(tmp);
	}
}
