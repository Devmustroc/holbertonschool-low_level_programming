#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - f pointer to the main function
 *@name: pointer
 *@f: pointer to pointer
 *Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
		return;
	(*f)(name);
}
