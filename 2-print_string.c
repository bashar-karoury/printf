#include "main.h"

void printString(va_list ag, int *n_c)
{	
	char *str = NULL;
	str = va_arg(ag, char *);
	if (str != NULL)
	{
		*n_c += print_string(str);
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
}
