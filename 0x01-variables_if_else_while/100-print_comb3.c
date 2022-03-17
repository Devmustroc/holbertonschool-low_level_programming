#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d, u;

	for (d = 48; d <= 57 ; d++)
	{
		for (u = d + 1; u <= 57; u++)
		{
			putchar(d);
			putchar(u);
			if (d == 56 && u == 57)
			{
				putchar ('\n');
			}
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
