#include "main.h"
#include <stdlib.h>

/**
 * printHex - doc
 * @ag: doc
 * @n_c: doc
 */

void printHex(va_list ag, int *n_c)
{
	*n_c += print_un_Hex(va_arg(ag, int));
}

/**
 * printhex - doc
 * @ag: doc
 * @n_c: doc
 */

void printhex(va_list ag, int *n_c)
{
	*n_c += print_un_hex(va_arg(ag, int));
}

/**
 * print_un_Hex - prints an givan integer formatted as hexadicmal
 * @num: given int
 * Return: integer length
 */

int print_un_Hex(unsigned int num)
{
	int remainder;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	char buffer[20];
	int index = 0;

	while (num > 0)
	{
		remainder = num % 16;
		if (remainder < 10)
		{
			buffer[index++] = '0' + remainder;
		}
		else
		{
			buffer[index++] = 'A' + (remainder - 10);
		}
		num /= 16;
	}

	for (int i = index - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}

	return (index);
}

/**
 * print_un_hex - prints an givan integer formatted as hexadicmal
 * @num: given int
 * Return: integer length
 */

int print_un_hex(unsigned int num)
{
	int remainder;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	char buffer[20];
	int index = 0;

	while (num > 0)
	{
		remainder = num % 16;
		if (remainder < 10)
		{
			buffer[index++] = '0' + remainder;
		}
		else
		{
			buffer[index++] = 'a' + (remainder - 10);
		}
		num /= 16;
	}

	for (int i = index - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}

	return (index);
}

