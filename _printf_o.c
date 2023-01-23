#include "main.h"

/**
 * _printf_o - a function that prints octal format to stdout
 * @ap: the integer to conver to octal
 * Return: the counter
 */
int _printf_o(va_list ap)
{
	int *arr, num1, counter;
	unsigned int num2, num3;

	num2 = va_arg(ap, unsigned int), num3 = num2;

	while (n / 8 != 0)
	{
		n /= 8;
		counter++;
	}
	counter++;

	arr = malloc(sizeof(int) * counter);

	for (num1 = 0; num1 < counter; num1++)
	{
		arr[num1] = num3 % 8;
		num3 /= 8;
	}

	for (num1 = counter - 1; num1 >= 0; num1--)
	{
		_putchar(arr[num1] + '0');
	}
	free(arr);
	return (counter);
}
