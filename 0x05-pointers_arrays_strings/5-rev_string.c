#include "main.h"

/**
 * rev_string - reverse a string.
 *
 *@s: the string to be reversed.
 */
void rev_string(char *s)
{
	int i, j, lent;
	char m1, m2;

	for (lent = 0; s[lent] != '\0'; lent++)
	{
	}
	j = lent - 1;
	i = 0;
	while (i < j)
	{
		m1 = s[i];
		m2 = s[j];
		s[i] = m2;
		s[j] = m1;
		i++;
		j--;
	}
}
