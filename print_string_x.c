#include "main.h"
#include <stddef.h>


/**
* print_h - print passed character as hex in 2 digits upper case
* @c: char to be printed
*
* Return: number of characters printed
*/
static int print_h(char c);
/**
 * printStringX - doc
 * @ag: doc
 * @n_c: doc
 */

void printStringX(va_list ag, int *n_c)
{
	char *str = NULL;
	char null[] = "(null)";

	str = va_arg(ag, char *);
	if (str != NULL)
	{
		*n_c += print_string_x(str);
	}
	else
	{
		*n_c += print_string(null);
	}
}

/**
 * print_string_x - print given string
 * @str: given string
 * Return: void
 */

int print_string_x(char *str)
{
	int x = 0;
	int n = 0;

	while (str[x] != '\0')
	{
		if ((str[x] < 32) || (str[x] >= 127))
		{
			n += print_c('\\');
			n += print_c('x');
			n += print_h(str[x]);
		}
		else
		{
			n += print_c(str[x]);
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
static int print_h(char c)
{
	char hi = 0;
	char lo = 0;
	int n = 0;

	char S[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
				 'A', 'B', 'C', 'D', 'E', 'F'};
	hi = ((c >> 4) & 0x0F);
	lo = (c & 0xF);
	n += print_c(S[(int)hi]);
	n += print_c(S[(int)lo]);
	return (n);
}
