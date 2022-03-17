#include "main.h"
#include <stdio.h>
/**
 *print_line - straight line the command.
 *@n: print 0 or less, the function should only print next line.
 */
void print_line(int n)
{
	if (n > 0)
	{
		for (  ; n > 0; n--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
