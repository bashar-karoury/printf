#include "main.h"
#include <stddef.h>

/**
 * printString - doc
 * @ag: doc
 * @n_c: doc
 */

void printString(va_list ag, int *n_c, flags_t *flags)
{
	char *str = NULL;
	char null[] = "(null)";

	str = va_arg(ag, char *);
	if (str != NULL)
	{
		*n_c += print_string(str, flags);
	}
	else
	{
		*n_c += print_string(null, flags);
	}
}

/**
 * print_string - print given string
 * @str: given string
 * Return: void
 */

int print_string(char *str, flags_t *flags)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	return (x);
}
