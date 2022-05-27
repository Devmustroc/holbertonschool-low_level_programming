#include "hash_tables.h"
/**
 * hash_table_delete - delete table
 * @ht: pointer to struct of hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *ptr = NULL;
	hash_node_t *head = NULL;

	while (i < ht->size)
	{
		ptr = ht->array[i];

		while (ptr)
		{
			head = ptr->next;
			free(ptr->value);
			free(ptr->key);
			free(ptr);
			ptr = head;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
