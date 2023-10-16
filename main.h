#ifndef _MAIN_H_
#define _MAIN_H_
/* Header files */
#include <stdarg.h>
#include <stddef.h>
/* Data types */

typedef void (*printFunc)(va_list ag, int *p_n_c);

/**
* struct specifier - struct as data type to link specifier
* with their handler files
* @symbol: specifier character
* @function: pointer function to be called if specifier appear after %
*/
struct specifier
{
	char symbol;
	printFunc function;
};

typedef struct specifier specifier_t;

/* Declarations */
int _printf(const char *format, ...);
int _putchar(char c);
int print_c(char x);
int print_string(char *str);
int print_Integer(int num);
void printString(va_list ag, int *n_c);
void printInt(va_list ag, int *p_n_c);
void printChar(va_list ag, int *n_c);
#endif
