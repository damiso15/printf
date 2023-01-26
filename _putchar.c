#include <unistd.h>

/**
 * _putchar - writes the character c to stdout.
 * @c: the characte rto print
 * Return: on Success 1
 * On error, -1 is returned, an errno is set appropraitely
 * Description: implementing a local buffer of 1024 bytes to call write
 * as little as possible
 */
int _putchar(char c)
{
	static char buff_size[1024];
	static int num;

	if (c == -1 || num >= 1024)
	{
		write(1, &buff_size, num);
		num = 0;
	}
	if (c != -1)
	{
		buff_size[num] = c;
		num++;
	}
	return (1);
}

/**
 * _puts - a function that prints a string to stdout
 * @str: pointer to the string to print
 * Return: number of chars written
 */
int _puts(char *str)
{
	register int num;

	for (num = 0; str[num]; num++)
		_putchar(str[num]);
	return (num);
}
