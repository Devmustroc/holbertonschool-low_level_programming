#ifndef _VARDIAC_FUNCTION_H_
#define _VARDIAC_FUNCTION_H_
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct print - multiple choice print
 * @x: char Type of print
 * @T_func: funct
 */
typedef struct print
{
	char *x;
	void (*T_func)(va_list);
} t_print;

#endif
