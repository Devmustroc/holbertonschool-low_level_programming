#include "main.h"
/**
 *print_rev - prints a string, in reverse.
 *
 *@s: string a print in reverse.
 */
void print_rev(char *s)
{
	int i = 0;
	int rev;

	for (rev = 0; s[rev] != '\0'; rev++)
	{
	}
		for (i = rev - 1; i >= 0; i--)
		{
			_putchar(s[i]);
		}
	_putchar('\n');
}
