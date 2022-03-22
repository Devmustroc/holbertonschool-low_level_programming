#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the nodes at the index of an LL.
 * @head: pointer to head.
 * @index: index node must be deleted.
 * Return: succees 1, failed -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *removeNode;
	unsigned int i;

	i = 0;
	temp = *head;
	while (temp)
	{
		if (index == 0)
		{
			removeNode = *head;
			*head = removeNode->next;
			free(removeNode);
			return (1);
		}
		if (i == index - 1)
		{
			removeNode = temp->next;
			temp->next = removeNode->next;
			free(removeNode);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
