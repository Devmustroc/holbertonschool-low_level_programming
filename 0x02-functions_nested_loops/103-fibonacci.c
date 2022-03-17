#include <stdio.h>

/**
 * main - prints the add of the Even-Valued.
 * Numbers from Fibonacci Sequence.
 * Return: 0
 */
int main(void)
{
	long int a, b, c, d;

	a = 1;
	b = 2;
	c = d = 0;
	while (d <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if ((a % 2) == 0)
		{
			d += a;
		}
	}
	printf("%ld\n", d);
	return (0);
}
