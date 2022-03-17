#include "main.h"

/**
 * times_table - prints the times table up to 9
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, w;

	for (i = 0; i <= 12; i++)
		for (j = 0; j <= 12; j++)
		{
			w = i * j;
			if (j != 0)
				_putchar(' ');
			if (w >= 10)
				_putchar(48 + (w / 10));
			else if (j != 0)
				_putchar(' ');
			_putchar(48 + (w % 10));
			if (j != 9)
				_putchar(',');
			else
				_putchar('\n');
		}
}
