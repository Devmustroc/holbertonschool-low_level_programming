#include "main.h"
#include <limits.h>
/**
*print_binary - prints the binary representation of a number.
*@n: number to convert
*Return: none
*/
void print_binary(unsigned long int n)
{
	int i, start;

	start = 0;
	if (n == 0)
		_putchar('0');
	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		/* for doesnt print zeros in the beginning*/
		if ((n >> i) & 1)
			start = 1;
		/*printing if you find first 1*/
		if (start == 1)
		{
			if ((n >> i) & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
