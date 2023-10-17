#include "main.h"
#include <stddef.h>

/**
 * printString - doc
 * @ag: doc
 * @n_c: doc
 */

void printString(va_list ag, int *n_c)
{
	char *str = NULL;
	char null[] = "(null)";

	str = va_arg(ag, char *);
	if (str != NULL)
	{
		*n_c += print_string(str);
	}
	else
	{
		*n_c += print_string(null);
	}
}

/**
 * print_string - print given string
 * @str: given string
 * Return: void
 */

int print_string(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	return (x);
}
