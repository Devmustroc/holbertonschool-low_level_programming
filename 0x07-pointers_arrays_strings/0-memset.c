#include "main.h"
/**
 *_memset - insert n times the content of b into s.
 *@s: pointer to buffer to be set.
 *@b: is the value to be set.
 *@n: unsigned number of byte to be set.
 *Return: string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
