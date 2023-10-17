#include "main.h"
#include <stddef.h>

/**
 * printStringROT13 - doc
 * @ag: doc
 * @n_c: doc
 */

void printStringROT13(va_list ag, int *n_c)
{
	char *str = NULL;
	char null[] = "(null)";

	str = va_arg(ag, char *);
	if (str != NULL)
	{
		*n_c += print_string_rot13(str);
	}
	else
	{
		*n_c += print_string(null);
	}
}

/**
 * print_string_rot13 - print given string
 * @str: given string
 * Return: void
 */

int print_string_rot13(char *str)
{
	int x = 0;
	int i = 0;
	int found = 0;

	char keys[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
			'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A',
			'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
			'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

	char subs[] =  {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
			'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'N',
			'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C',
			'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};

	while (str[x] != '\0')
	{
		found = 0;
		for (i = 0; i < 52; i++)
		{
			if (str[x] == keys[i])
			{
				_putchar(subs[i]);
				found = 1;
				break;
			}
		}
		if (!(found))
		{
			_putchar(str[x]);
		}
		x++;
	}
	return (x);
}
