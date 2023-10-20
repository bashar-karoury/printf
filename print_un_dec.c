#include "main.h"
#include <stdlib.h>

/**
 * print_undec - doc
 * @ag: doc
 * @n_c: doc
 */

void print_undec(va_list ag, int *n_c, flags_t *flags)
{
	*n_c += print_un_dec(va_arg(ag, int), flags);
}

/**
 * print_un_dec - prints an givan integer
 * @num: given int
 * Return: integer length
 */

int print_un_dec(unsigned int num, flags_t *flags)
{
	char buffer[20];
	int index = 0;
	int i;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		buffer[index++] = '0' + (num % 10);
		num /= 10;
	}

	for (i = index - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}
	return (index);
}
