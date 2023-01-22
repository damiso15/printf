#ifndef MAIN_H
#define MAIN_H

/* normal standard c library */
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * struct _print - a structure to define our printf value types
 * @print_type: the type to print
 * @variadic_function: the function to print
 */
typedef struct print_type
{
	char *type;
	int (*variadic_function)(va_list);
} print_f;

int _putchar(char c);
int _printf(const char *format, ...);

#endif
