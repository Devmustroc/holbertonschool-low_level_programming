#include "3-calc.h"
/**Prototypes**/
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function that add two numbers
 * @a: number 1.
 * @b: number 2.
 * Return: the sum of the number 1 and number 2.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that substract two numbers
 * @a: number 1.
 * @b: number 2.
 * Return: the substraction of the number 1 and number 2.
 */
int op_sub(int a, int b)
{
		return (a - b);
}
/**
 * op_mul - function that multiply two numbers
 * @a: number 1.
 * @b: number 2.
 * Return: the multiply of the number 1 and number 2.
 */
int op_mul(int a, int b)
{
		return (a * b);
}
/**
 * op_div - function that division two numbers
 * @a: number 1.
 * @b: number 2.
 * Return: the division of the number 1 and number 2.
 */
int op_div(int a, int b)
{
		if (b == 0)
{
		printf("Error\n");
		exit(100);
}
		return (a / b);
}
/**
 * op_mod - function that Modulo two numbers
 * @a: number 1.
 * @b: number 2.
 * Return: the modulo of the number 1 and number 2.
 */
int op_mod(int a, int b)
{
	if (b == 0)
{
		printf("Error\n");
		exit(100);
}
		return (a % b);
}


