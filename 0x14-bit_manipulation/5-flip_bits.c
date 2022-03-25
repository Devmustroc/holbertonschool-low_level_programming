#include "main.h"
#include <stdio.h>
/**
 *flip_bits - number of different bits between two numbers.
 *@n: first number.
 *@m:secound number.
 *Return: number of bits flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d, c;
	unsigned int count, i;

	count = 0;
	c = 1;
	d = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (c == (d & c))
			count++;
		c <<= 1;
	}
	return (count);
}
