#include "lists.h"
/*
 *add_node - add a new node at the beginning of a list.
 *@head: first node in the list.
 *@str: second node in the list
 *return: the adress of the new element, or NULL if given a failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	}
	return (*head);
}
