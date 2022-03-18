#include "lists.h"
/**
 * list_len - the number of element in a linked list.
 * @h: linked list.
 * Return: the number of element.
 */
size_t list_len(const list_t *h);
{
	size_t list_len;

	len = 0;
	while (h == NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
