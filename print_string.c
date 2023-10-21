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
	int len = 0;
	int n = 0; 
	char *data = NULL;

	len = string_len(str);
	data = malloc(len);
	if (data == NULL)
	{	
		return (0);
	}	
	while (str[x] != '\0')
	{
		data[x] = str[x];
		x++;
	}

    n = check_width_and_print(data, x, flags);
    free(data);
	return (n);
}
