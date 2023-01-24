#include "main.h"

/**
 * _printf_r - a function that prints a string in reverse to stdout
 * @ap: the string to reverse
 * Return: counter
 */
int _printf_r(va_list ap)
{
	int num, counter;
	char *string;

	string = va_arg(ap, char *);

	if (string == NULL)
		string = ")lin(";

	for (num = 0; string[num]; num++)
		continue;

	counter = 0;

	for (num -= 1; num >= 0; num--)
	{
		_putchar(string[num]);
		counter++;
	}
	return (counter);
}
