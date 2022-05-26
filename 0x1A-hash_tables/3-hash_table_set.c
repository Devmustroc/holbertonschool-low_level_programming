#include "hash_tables.h"
/**
 * hash_table_set - Hash table function
 * @ht: pointer to start of table
 * @key: key value of element
 * @value: value of key element
 * Return: 1 for success or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL;
	hash_node_t *node = NULL;
	unsigned long int index;

	if(!ht || !key || !value)
	{
		return(0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	new = ht->array[index];

	while(new)
	{
		if(strcmp(new->key, key) == 0)
		{
			free(new->value);
			new->value = strdup(value);
			return(1);
		}
		new = new->next;
	}
	node = malloc (sizeof(hash_node_t));
	if (node == NULL)
	{
		free(node);
		return (0);
	}

	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
