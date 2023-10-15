#include "main.h"

/**
 * print_string - print given string
 * @str: given string
 * Return: void
 */

void print_string(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
}
