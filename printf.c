#include "main.h"
#include <stdio.h>



static int print_until_specifier(const char **format, int *p_n_c);
static void call_specifier_function(const char **format, va_list ag,
	       				int *p_n_c);
/**
 * _printf - function that print data to STDOUT according to format
 * @format: null terminated string that contains text to be printed
 * with specifers to format following provided arguments
 * @...: zero or more arguments to be printed to STDOUT, they should match
 * specifiers in format string
 *
 * Return: the number of characters printed excluding the null terminator
 * character, negative value if failed
 */
int _printf(const char *format, ...)
{
	va_list ag;
	int n_c  = 0;

	if (format == NULL)
		return (-1);

	va_start(ag, format);
	while (print_until_specifier(&format, &(n_c)))
	{
		call_specifier_function(&format, ag, &(n_c));
	}
	va_end(ag);
	return (n_c);
}

/**
 * call_specifier_function - doc
 * @format: doc
 * @p_n_c: doc
 * @ag: doc
 * @sp: doc
 * Return: doc
 */


static void call_specifier_function(const char **format, va_list ag,
int *p_n_c)
{
	int i = 0;
	int specifier_found = 0;
	const specifier_t specifiers[NO_SP] = {
		{'c', printChar		},
		{'i', printInt		},
		{'s', printString	},
		{'d', printInt		},
	};
	(*(format))++;

	while(**format == ' ')
	{
		(*(format))++;	
	}

	if (**format == '\0')
	{
		*p_n_c = -1;
		return;
	}
	for (i = 0; i < NO_SP; i++)
	{
		if ((**format) == specifiers[i].symbol)
		{
			specifiers[i].function(ag, p_n_c);
			specifier_found = 1;
			break;
		}
	}
	if (!(specifier_found))
	{
		if (**(format) == '%')
		{
			*(p_n_c) += print_c('%');
		}
		else
		{
			*(p_n_c) += print_c('%');
			*(p_n_c) += print_c(**format);
		}
	}
	 (*format)++;

}

/**
 * print_until_specifier - doc
 * @format: doc
 * @p_n_c: doc
 * Return: doc
 */

static int print_until_specifier(const char **format, int *p_n_c)
{
	while (**format != '%')
	{
		if (**format == '\0')
			return (0);
		*(p_n_c) += print_c(**format);
		(*format)++;
	}

	return (1);
}
