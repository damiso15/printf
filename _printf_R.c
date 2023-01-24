#include "main.h"

/**
 * _printf_R - a function that prints strings in rot13 format to stdout.
 * @ap: the string to convert to rot13 format
 * Return: counter
 */
int _printf_R(va_list ap)
{
	unsigned int num1, num2;
	int counter;
	char *string;
	char normal_str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char cnvt_str[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	string = va_arg(ap, char *);

	if (string == NULL)
		string = "(nil)";

	for (num1 = 0; string[num1]; num1++)
	{
		for (num2 = 0; normal_str[num2]; num2++)
		{
			if (normal_str[num2] == string[num1])
			{
				_putchar(cnvt_str[num2]);
				counter++;
				break;
			}
		}
		if (!normal_str[num2])
		{
			_putchar(string[num1]);
			counter++;
		}
	}
	return (counter);
}
