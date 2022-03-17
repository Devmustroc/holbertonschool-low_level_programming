#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int v = 0;
	int x = 0;
	int y = 0;
	int z = 0;

	for (v = 0; v <= 9; v++)
	{
		for (x = 0; x <= 9; x++)
		{
			z = x + 1;
			y = v;
			for (; y <= 9; y++)
			{
				for (; z <= 9; z++)
				{
					putchar(v + '0');
					putchar(x + '0');

					putchar(' ');

					putchar(y + '0');
					putchar(z + '0');

					if (!(v == 9 && x == 8
					      && y == 9 && z == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				z = 0;
			}
		}
	}

	putchar('\n');

	return (0);
}
