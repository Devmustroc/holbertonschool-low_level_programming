#include "hash_tables.h"
/**
 * hash_table_create - creating a new hash table
 * @size: size of the hash table
 * Return: pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	if(size < 1)
	
		return(NULL);
	
	/* Allocates the table itself*/
	
	ht = malloc(sizeof(hash_table_t));
	if(ht == NULL)
	{
		return(NULL);
	}
	
	/*Allocates pointer to the end head nodes*/
	
	ht->size = size; 
	ht->array = malloc(sizeof(hash_node_t) * size);
	if(ht->array == NULL)
	{
		return(NULL);
	}
	return(ht);
}
