#include<stdio.h>

/**
 * main - first 50 fibonatchi.
 *
 * Return: void.
 */
int main(void)
{
	long int a, b, c, i;

	a = 1;
	b = 2;
	c = 3;

	printf("%ld, ", a);
	printf("%ld, ", b);
	for (i = 3 ; i <= 49; i++)
	{
		printf("%ld, ", c);
		a = b;
		b = c;
		c = a + b;
	}
	printf("%ld\n", c);

	return (0);
}
