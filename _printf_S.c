#include "main.h"

/**
 * _printf_S - a function that prints strings and ASCII characters to stdout.
 * @S: the string to print
 * Return: counter
 */
int _printf_S(va_list S)
{
	unsigned int num;
	int counter;
	char *string;

	string = va_arg(S, char *);

	if (string == NULL)
		string = "(null)";

	counter = 0;
	for (num = 0; string[num]; num++)
	{
		if (string[num] < 32 || string[num] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			counter += 2;
			counter += _printf_x(S);
		}
		else
		{
			_putchar(string[num]);
			counter++;
		}
	}
	return (counter);
}
