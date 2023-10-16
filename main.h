#ifndef _MAIN_H_
#define _MAIN_H_
/* Header files */
#include <stdarg.h>

/* Declarations */
int _printf(const char *format, ...);
int _putchar(char c);
void print_c(char x);
void print_string(char *str);
int print_modulus_mark(void);
void print_Integer(int num);
void printString(va_list ag, int *n_c);
void printInt(va_list ag, int *p_n_c);
void printChar(va_list ag, int *n_c);
void printMod(va_list ag, int *n_c);
#endif
