#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @array: The array
 * @size: The size of the array.
 * @cmp: A pointer used to compare values.
 * Return: If no element matches return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}
	return (-1);
}
