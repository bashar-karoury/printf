#ifndef _MAIN_H_
#define _MAIN_H_
/* Header files */
#include <stdarg.h>
#include <stddef.h>
/* MACROS */
#define NO_SP	5
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
int print_Binary(unsigned int num);
int print_un_dec(unsigned int num);
int print_un_oc(unsigned int num);

void printString(va_list ag, int *n_c);
void printInt(va_list ag, int *p_n_c);
void printChar(va_list ag, int *n_c);
void printBinary(va_list ag, int *n_c);
void print_undec(va_list ag, unsigned int *n_c);
void print_unoc(va_list ag, unsigned int *n_c);
#endif
