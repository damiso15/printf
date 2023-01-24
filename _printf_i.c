#include "main.h"

/**
 * _printf_i - a function that prints an integer in base 10 to stdout.
 * @ap: the base 10 integer to print
 * Return: the total number of the integer
 */
int _printf_i(va_list ap)
{
	int arr[10], num1, num2, num3, sum, counter;

	num3 = va_arg(ap, int), counter = 0;

	if (num3 < 0)
	{
		num3 *= -1;
		_putchar('-'), counter++;
	}

	num2 = 1000000000;
	arr[0] = num3 / num2;

	for (num1 = 1; num1 < 10; num1++)
	{
		num2 /= 10;
		arr[num1] = (num3 / num2) % 10;
	}

	for (num1 = 0; num1 < 10; num1++)
	{
		sum = 0;
		sum += arr[num1];
		if (sum != 0 || num1 == 9)
		{
			_putchar('0' + arr[num1]);
			counter++;
		}
	}
	return (counter);
}
