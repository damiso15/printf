#include "main.h"

/**
 * _printf_s - a function that prints a string to stdout.
 * @ap: the string to print
 * Return: 0 as (Success)
 */
int _printf_s(va_list ap)
{
	char *string;
	int num = 0;

	string = va_arg(ap, char*);

	if (string == NULL)
		string = "(nill)";

	for (num = 0; string[num]; )
		_putchar(string[num++]);
	return (0);
}
