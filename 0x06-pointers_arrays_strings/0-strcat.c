#include "main.h"
#include <string.h>
/**
 *_strcat - concenate 2 strings.
 *@dest: Destination Strings.
 *@src: Source Strings.
 *Return: strings.
 **/
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
