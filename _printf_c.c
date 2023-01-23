#include "main.h"

/**
 * _printf_c - a function that prints to stdout a character
 * @ap: the character to print
 * Return: 0 as (Success)
 */
int _printf_c(va_list ap)
{
	char character;

	character = va_arg(ap, int);
	_putchar(character);
	return (0);
}
