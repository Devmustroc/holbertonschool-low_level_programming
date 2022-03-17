#include "main.h"

/**
 *leet - incoding the string into 1337.
 *@s: the string itself for the incoding.
 *Return: Encoding string.
 */

char *leet(char *s)
{
	int i, j;

	char code1337[] = {'4', '3', '0', '7', '1'};
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((s[i] == lower[j]) || (s[i] == upper[j]))
				(s[i] = code1337[j]);
		}
	}
	return (s);

}
