#include "lists.h"
/**
 * print_listint - the number of element in a linked list.
 * @h: linked list.
 * Return: the number of element.
 */
size_t print_listint(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
