#include "main.h"

/**
 *_strpbrk - return the first occurence of a string's char in a string.
 *@s: first string.
 *@accept: second string.
 *Return: char or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
		for (j = 0; accept[j]; j++)
			if (accept[j] == s[i])
				return (s + i);
	return (0);
}
