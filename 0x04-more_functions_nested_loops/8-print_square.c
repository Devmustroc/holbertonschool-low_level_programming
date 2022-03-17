#include "main.h"
/**
 *print_square - function that prints a square.
 * @size : is the size of the square.
 *
 * Return - If size is 0 or less, the function should print only a new line.
*/
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 1; j < size; j++)
			{
				_putchar(35);
			}
			_putchar(35);
			_putchar('\n');
		}
	}
}
