#include "lists.h"
/**
 * sum_listint - return the sum the linked list data n.
 * @head: pointer to the first node.
 * Return: the sum of all data listint.
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	sum = 0;
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
