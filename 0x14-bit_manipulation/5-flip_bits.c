#include "main.h"
#include <stdio.h>
/**
 *countSetBits- function that count set bit.
 *@n: first number.
 *Return: return count.
 */
int countSetBits(int n)
{
	int count = 0;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}
/**
 *flip_bits - number of different bits between two numbers
 *@n: first number.
 *@m: second number.
 *Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}
