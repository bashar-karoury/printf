#include "main.h"
#include <stdio.h>
typedef void (*printFunc)(va_list ag);

int print_until_specifier(const char **format, int *p_n_c);
void printInt(va_list ag, int *p_n_c);
void printChar(va_list ag, int *p_n_c);

typedef struct{
	char symbol;
	printFunc function;
}specifier_t;

specifier_t specifiers[2] = {
	{'c', printChar}
	,
		{'i', printInt}
};


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
		format++;
		for (i = 0; i < 2; i++)
		{
			if ((*(format)) == specifiers[i].symbol)
			{
				specifiers[i].function(ag, &(n_c));
				break;
			}
		}
		format++;
	}
	return (n_c);
}

int print_until_specifier(const char **format, int *p_n_c)
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

void printInt(va_list ag, ){
	printf("%i", va_arg(ag, int *p_n_c));

}
void printChar(va_list ag){
    printf("%c", va_arg(ag, int *p_n_c));
}
