#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: head pointer.
 * return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t count;

	temp = h;
	count = 0;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
