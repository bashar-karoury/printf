#ifndef _MAIN_H_
#define _MAIN_H_
/* Header files */
#include <stdarg.h>
#include <stddef.h>

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
