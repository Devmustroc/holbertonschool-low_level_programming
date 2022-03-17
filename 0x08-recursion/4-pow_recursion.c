#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - value of x raised to the power of y.
 * @x: the Base.
 * @y: inter that we raised power to x.
 * Return: numero.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{

		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (_pow_recursion(x, y - 1) * x);
}
