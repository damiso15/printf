#include "main.h"

/**
 * _printf_S - a function that prints strings and ASCII characters to stdout
 * @ap: the string to print
 * Return: counter
 */
int _printf_S(va_list ap)
{
	unsigned int num;
	int counter;
	char *string;

	string = va_arg(ap, char *);

	if (string == NULL)
		sring = "(nill)";

	for (num = 0; string[num]; num++)
	{
		counter = 0;
		if (string[num] < 32 || str[num] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			counter += 2;
			counter += _printf_x(ap);
		}
		else
		{
			_putchar(string[num]);
			counter++;
		}
	}
	return (counter);
}
