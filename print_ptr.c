#include "main.h"

/**
 * printptr - doc
 * @ag: doc
 * @n_c: doc
 */

void printptr(va_list ag, int *n_c)
{
	*n_c += print_ptr(va_arg(ag, void *));
}

/**
 * print_ptr - doc
 * @ptr: doc
 * Return: length
 */

int print_ptr(void *ptr)
{
	unsigned long int value = (unsigned long int)ptr;
	int remainder, i;
	char buffer[20];
	int index = 0;
	char null[] = "(nil)";

	if (value == 0)
	{
		print_string(null);
		return (1);
	}

	_putchar('0');
	_putchar('x');
	
	while (value > 0)
	{
		remainder = value % 16;
		if (remainder < 10)
		{
			buffer[index++] = '0' + remainder;
		}
		else
		{
			buffer[index++] = 'a' + (remainder - 10);
		}
		value /= 16;
	}

	for (i = index - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}

	return (index + 2);
}
