#include "main.h"

/**
 * _islower - function slower that checks for lowercase character.
 * @c: c is lowercase
 * Return: 1 if c is lowercase otherwise Returns 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

