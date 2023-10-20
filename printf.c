#include "main.h"
#include <stdio.h>


static int print_until_specifier(const char **format, int *p_n_c);
int ScanFlags(const char **format, flags_t *flags);
static void handle_specifier(const char **format, va_list ag, int *p_n_c);
int ScanWidthModifier(const char **format, flags_t *flags);
static int Scan_call_specifier_function(const char **format, va_list ag, int *p_n_c, flags_t *flags);

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
		handle_specifier(&format, ag, &(n_c));
	}
	va_end(ag);
	return (n_c);
}

/**
 * call_specifier_function - doc
 * @format: doc
 * @p_n_c: doc
 * @ag: doc
 * Return: doc
 */


static void handle_specifier(const char **format, va_list ag, int *p_n_c)
{
	int space = 0;
	flags_t flags = { 0, 0, 0, 0, 0, 0, 0};

	if (!ScanFlags(format, &flags))
	{
		*p_n_c = -1;
		return ;
	}
	if(!ScanWidthModifier(format , &flags))
	{
		*p_n_c = -1;
		return ;
	}
	if(!Scan_call_specifier_function(format, ag, p_n_c, &flags))
	{	
		if (**(format) == '\0')
		{	 
			*(p_n_c) = -1;
			return ;
		}
		else if (**(format) == '%')
		{
			*(p_n_c) += print_char('%');
		}
		else
		{	
			*(p_n_c) += print_char('%');
			if (space)
				*(p_n_c) += print_char(' ');
			*(p_n_c) += print_char(**format);
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
		*(p_n_c) += print_char(**format);
		(*format)++;
	}

	return (1);
}


int ScanFlags(const char **format, flags_t *flags)
{	
	int isFlag = 1;
	
	while (isFlag)
	{	
		(*(format))++;
		switch (**format)
		{
			case '\0':
				return (0);
			case '-':
				flags->justify = 1;
				break;
			case '0':
				flags->zerofilled = 1;
				break;
			case '+':
				flags->plus = 1;
				break;
			case ' ':
				flags->space = 1;
				break;
			case '#':
				flags->hash = 1;
				break;
			case 'l':
				flags->len_mod = 'l';
				break;
			case 'h':
				flags->len_mod = 'h';
				break;
			default:
				isFlag = 0;
				(*(format))--;
		}
	}
	return (1);
}

static int Scan_call_specifier_function(const char **format, va_list ag, int *p_n_c, flags_t *flags)
{
	int i = 0, specifier_found = 0;
	const specifier_t specifiers[NO_SP] = {
		{'c', printChar }, {'i', printInt}, {'s', printString}, {'d', printInt},
		{'b', printBinary}, {'r', printReverseString}, {'S', printStringX},
		{'R', printStringROT13}, {'u', print_undec}, {'o', print_unoc},
		{'x', printhex}, {'X', printHex}, {'p', printptr}
	};
	for (i = 0; i < NO_SP; i++)
	{	
		if ((**format) == specifiers[i].symbol)
		{
			specifiers[i].function(ag, p_n_c, flags);
			specifier_found = 1;
			break;
		}
	}
	return (specifier_found);
}

int ScanWidthModifier(const char **format, flags_t *flags)
{
	int width = 0;

	(*(format))++;
	if (**format == '\0')
	{
		return (0);
	}
	while (**format >= '0' && **format <='9')
	{
		width = (**format - '0') + (width * 10);
	    (*(format))++;
	}
	flags->width = width;
	return (1);
}
