#include "main.h"
/**
 * string_toupper - change lower case to uppercase.
 *@s: Strings.
 *Return: char
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; i <= s[i] ; i++)
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	return (s);
}
