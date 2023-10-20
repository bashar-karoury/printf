#include "main.h"
#include <stddef.h>


/**
* print_h - print passed character as hex in 2 digits upper case
* @c: char to be printed
*
* Return: number of characters printed
*/
static int print_h(char c, flags_t *flags);
/**
 * printStringX - doc
 * @ag: doc
 * @n_c: doc
 */

void printStringX(va_list ag, int *n_c, flags_t *flags)
{
	char *str = NULL;
	char null[] = "(null)";

	str = va_arg(ag, char *);
	if (str != NULL)
	{
		*n_c += print_string_x(str, flags);
	}
	else
	{
		*n_c += print_string(null, flags);
	}
}

/**
 * print_string_x - print given string
 * @str: given string
 * Return: void
 */

int print_string_x(char *str, flags_t *flags)
{
	int x = 0;
	int n = 0;

	while (str[x] != '\0')
	{
		if ((str[x] < 32) || (str[x] >= 127))
		{
			n += print_c('\\', flags);
			n += print_c('x', flags);
			n += print_h(str[x], flags);
		}
		else
		{
			n += print_c(str[x], flags);
		}
		x++;
	}
	return (n);
}

/**
* print_h - print passed character as hex in 2 digits upper case
* @c: char to be printed
*
* Return: number of characters printed
*/
static int print_h(char c, flags_t *flags)
{
	char hi = 0;
	char lo = 0;
	int n = 0;

	char S[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
				 'A', 'B', 'C', 'D', 'E', 'F'};
	hi = ((c >> 4) & 0x0F);
	lo = (c & 0xF);
	n += print_c(S[(int)hi], flags);
	n += print_c(S[(int)lo], flags);
	return (n);
}
