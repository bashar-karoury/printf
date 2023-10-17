#include "main.h"
#include <stdlib.h>

/**
 * printBinary - doc
 * @ag: doc
 * @n_c: doc
 */

void printBinary(va_list ag, int *n_c)
{
	*n_c += print_Binary(va_arg(ag, unsigned int));
}

/**
 * print_Binary - prints an givan integer formatted as binary
 * @num: given int
 * Return: integer length
 */

int print_Binary(unsigned int num)
{
	int i = 0;
	int first_one = 0;
	int temp = 0;
	int n = 0;

	for (i = 31; i >= 0; i--)
	{
		temp = ((num >> i) & (0x01));
		if (temp)
		{
			first_one = 1;
		}
		if (first_one)
		{
			n += print_c(temp + '0');
		}
	}
	if (!(first_one))
		n += print_c('0');

	return (n);
}
