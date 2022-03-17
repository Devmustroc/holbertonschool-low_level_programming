#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - count from n to 98.
 *@x:integer.
 * Return: Always 0.
 */
void print_to_98(int x)
{
	while (x != 98)
	{
		printf("%d, ", x);
		if (x > 98)
			x--;
		else
			x++;
	}
	printf("98\n");
}
