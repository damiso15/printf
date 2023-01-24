#ifndef MAIN_H
#define MAIN_H

/* normal standard c library */
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>

/* macros */
#define BUFSIZE 1024

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
int _printf_c(va_list ap);
int _printf_s(va_list ap);
int _printf_d(va_list ap);
int _printf_i(va_list ap);
int _printf_b(va_list ap);
int _printf_u(va_list ap);
int _printf_o(va_list ap);
int _printf_x(va_list ap);
int _printf_X(va_list ap);
int _printf_S(va_list ap);
int _printf_p(va_list ap);
int _printf_r(va_list ap);
int _printf_R(va_list ap);

int (*variadic_function)(va_list);

int main1(void);
int main2(void);
int main3(void);
int main4(void);

#endif
