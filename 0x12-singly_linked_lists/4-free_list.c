#include "lists.h"
/**
 *free_list - free a list.
 *@head: Linked list.
 *Return: none.
 */
void free_list(list_t *head)
{
	test_t *temp;

	while (1)
	{
		if (head == NULL)
			break;
		temp = head;
		head = temp->next;
		free(temp->str);
		free(tmp);
	}
}
