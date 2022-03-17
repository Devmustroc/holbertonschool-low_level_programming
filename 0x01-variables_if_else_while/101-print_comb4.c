#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d, i, j;

	for (d = 48; d <= 57 ; d++)
	{
		for (i = d + 1; i <= 57; i++)
		{
			for (j = i + 1; j <= 57; j++)
			{
			putchar(d);
			putchar(i);
			putchar(j);
			if (d == 55 && i == 56 && j == 57)
			{
				putchar ('\n');
			}
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	return (0);
}
