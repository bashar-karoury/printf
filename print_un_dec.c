#include "main.h"
#include <stdlib.h>

/**
 * printInt - doc
 * @ag: doc
 * @n_c: doc
 */

void print_undec(va_list ag, unsigned int *n_c)
{
	*n_c += print_un_dec(va_arg(ag, int));
}

/**
 * print_Integer - prints an givan integer
 * @num: given int
 * Return: integer length
 */

int print_un_dec(unsigned int num)
{
	if (num == 0)
	{
		_putchar('0');  // Special case for zero
		return (1);
	}

	char buffer[20];
	int index = 0;

	while (num > 0)
	{
		buffer[index++] = '0' + (num % 10);
		num /= 10;
	}

	for (int i = index - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}
	return (index);
}
