#include "main.h"

typedef struct{
	char symbol;
	printFunc function;
}specifier_t;

typedef void (*printFunc)(va_list ag);

static int print_until_specifier(const char **format, int *p_n_c);
static void call_specifier_function(va_list ag, int *p_n_c, char sp);
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
	int i = 0;
	int n_c  = 0;

	va_start(ag, format);
	while(print_until_specifier(&format, &(n_c)))
	{
		call_specifier_function(ag, &(n_c), *(++format));
		format++;
	}
	return (n_c);
}

static void call_specifier_function(va_list ag, int *p_n_c, char sp)
{
	int i = 0;

	specifier_t specifiers[2] = 
	{
		{'c', printChar	},
		{'i', printInt	}
	};

	for (i = 0; i < 2; i++)
	{
		if (sp == specifiers[i].symbol)
		{
			specifiers[i].function(ag, &(n_c));
			break;
		}
	}

}

static int print_until_specifier(const char **format, int *p_n_c)
{
	if (**format == '\0')
		return 0;
	while(**format != '%')
	{
		printf("%c", **format);
		(*format)++;
	}

	return (1);
}
