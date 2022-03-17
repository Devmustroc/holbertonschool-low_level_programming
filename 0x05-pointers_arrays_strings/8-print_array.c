#include "main.h"
#include <stdio.h>
/**
 *print_array - print  an array of integers.
 *@n: the number of integers.
 *@a: pointer to an array.
*/
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j + 1 != n)
		printf(", ");
	}
	printf("\n");
}
