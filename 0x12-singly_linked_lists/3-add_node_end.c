#include "lists.h"
/**
 *add_node_end - add a new node of a list.
 *@head: pointer to the first node in a linked list.
 *@str: data to be copied to string filed of the node.
 *Return: the adresse of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tail;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		tail = *head;
		while (1)
		{
			if (tail->next == NULL)
			{
				tail->next = new;
				break;
			}
			tail = tail->next;
		}
	}
	return (new);
}
