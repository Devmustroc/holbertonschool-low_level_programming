#include "main.h"
/**
 *_strcpy - copies the strings pointed to src.
 *@src: source ponter.
 *@dest: destination pointer.
 *Return: value pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	int i;

		for (i = 0; src[i] != '\0'; i++)
		{
		dest[i] = src[i];
		}
	dest[i] = '\0';
	return (dest);
}
