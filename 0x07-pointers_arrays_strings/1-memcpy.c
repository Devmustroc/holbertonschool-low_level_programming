#include "main.h"
/**
 *_memcpy - insert n times the content of src into dest.
 *@dest: string destination buffer to be set.
 *@src: string value to be set.
 *@n: unsigned number of byte to be set.
 *Return: poniter dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
