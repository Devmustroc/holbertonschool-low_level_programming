#include "main.h"
/**
 * get_bit - return the value of a bit in the index given.
 * @n: number to check.
 * @index: starting from 0 of the bit we want to get.
 * Return: the value of bit at index, -1 if failed.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0)
	{
		return (0);
	}
	if (index > sizeof(n) * 8 - 1)
	{
		return (-1);
	}
	if ((n >> index) & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
