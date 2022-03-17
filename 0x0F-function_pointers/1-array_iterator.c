#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - print array elements.
 * @size: element to print.
 * @array: array.
 * @action: pointer to the print the array.
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
