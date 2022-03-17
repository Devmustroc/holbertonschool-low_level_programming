#include "main.h"
/**
 *rot13 - Encoding String Using rot13.
 *@s: String input.
 *Return: Destination Strings.
 **/
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] && s[i]; ++i)
	{
		if (s[i] >= 'a' && (s[i] + 13) <= 'z')
			{
			s[i] = s[i] + 13;
			}
	}
	return (s);
}
