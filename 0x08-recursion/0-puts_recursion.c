#include "main.h"

/**
 * _puts_recursion - prints a string in recursive way.
 * @s: String to print followed by new line.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}
	_putchar (*s);
	s++;
	_puts_recursion(s);
}
