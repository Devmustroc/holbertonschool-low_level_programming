#include "main.h"

/**
 * times_table - prints the times table up to 9
 * @n: integer.
 *
 * Return: On success 1, -1 if an error.
 */
void print_times_table(int n)
{
	int i, j, r;
	if (n >= 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			r = i * j;
			if (j != 0)
			{
				_putchar (',');
				_putchar (' ');
				if (r >= 10 && r < 100)
				{
					_putchar (' ');
					_putchar (r / 10 + '0');
					_putchar (r % 10 + '0');
				}
				else if (r < 10)
				{
					_putchar (' ');
					_putchar (' ');
					_putchar (r + '0');
				}
				else
				{
					_putchar (r / 100 + '0');
					_putchar ((r / 10) % 10 + '0');
					_putchar (r % 10 + '0');
				}
			}
			else
			{
				_putchar (r  + '0');
			}
		}
		_putchar('\n');
}
}
}