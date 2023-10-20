#include "main.h"

/**
 * printChar - doc
 * @ag: doc
 * @n_c: doc
 */

void printChar(va_list ag, int *n_c, flags_t *flags)
{
	*n_c += print_c((char)va_arg(ag, int), flags);
}

/**
 * print_c - print the c
 * @x: the input char
 * Return: void
 */

int print_c(char x, flags_t *flags)
{
	_putchar(x);
	return (1);
}
