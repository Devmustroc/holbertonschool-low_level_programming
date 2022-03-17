#include "main.h"
/**
 * factorial - factorial of a given number, and 0 factorial it will be 1.
 * @n : integer lower than 0, the function should -1 to indicate an error.
 * Return: value.
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * (factorial(n - 1)));
}

