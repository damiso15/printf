#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main8 - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main8(void)
{
	int len, len2;

	len = _printf("%!\n");
	len2 = printf("%!\n");
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
