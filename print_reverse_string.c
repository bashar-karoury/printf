#include "main.h"
#include <stddef.h>

/**
 * printReverseString - doc
 * @ag: doc
 * @n_c: doc
 */

void printReverseString(va_list ag, int *n_c)
{
	char *str = NULL;
	char null[] = "(null)";

	str = va_arg(ag, char *);
	if (str != NULL)
	{
		*n_c += print_reverse_string(str);
	}
	else
	{
		*n_c += print_string(null);
	}
}

/**
 * print_reverse_string - print given string
 * @str: given string
 * Return: void
 */

int print_reverse_string(char *str)
{
	int x = 0;
	int n = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	n = x--;
	while (x >= 0)
	{
		_putchar(str[x]);
		x--;
	}
	return (n);
}
