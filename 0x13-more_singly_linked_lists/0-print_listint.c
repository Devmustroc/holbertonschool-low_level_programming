#include "lists.h"
/**
 * print_listint - returns the number of elements in a linked listint_t list.
 * @h: head pointer.
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t count;

	temp = h;
	count = 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}
	return (count);
}
