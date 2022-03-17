#include "main.h"
#include <stdio.h>
/**
 *more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 *return: 0 succes.
 */
void more_numbers(void)
{
	int b, i;

	for (b = 0; b < 10; b++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
			_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
