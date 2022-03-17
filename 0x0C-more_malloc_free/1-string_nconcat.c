#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **string_nconcat - function that concatenates two strings.
 *@s1: pointer to string.
 *@s2: pointer to string.
 *@n: integer.
 *Return: pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, r1, r2;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (r1 = 0; s1[r1] != '\0'; r1++)
		;
	for (r2 = 0; s2[r2] != '\0'; r2++)
		;
	if (n >= r2)
		n = r2;
	s = malloc(sizeof(char) * (r1 + n + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = r1; j < r1 + n; j++)
		s[j] = s2[j - r1];
	s[j] = '\0';
	return (s);

}
