#ifndef _MAIN_H_
#define _MAIN_H_
/* Header files */
#include <stdarg.h>
#include <stddef.h>
/* MACROS */
#define NO_SP	13
/* Data types */

typedef void (*printFunc)(va_list ag, int *p_n_c, flags_t *flags);

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


struct flags
{
	int justify;
	int zerofilled;
	int plus;
	int space;
	int hash;
	int width;
	int len_mod;
};
typedef struct flags flags_t;

/* Declarations */
int _printf(const char *format, ...);
int _putchar(char c);
int print_c(char x, flags_t *flags);
int print_string(char *str, flags_t *flags);
int print_string_x(char *str, flags_t *flags);
int print_Integer(int num, flags_t *flags);
int print_Binary(unsigned int num, flags_t *flags);
int print_un_dec(unsigned int num, flags_t *flags);
int print_reverse_string(char *str, flags_t *flags);
int print_string_rot13(char *str, flags_t *flags);
int print_un_oc(unsigned int num, flags_t *flags);
int print_un_Hex(unsigned int num, flags_t *flags);
int print_un_hex(unsigned int num, flags_t *flags);
int print_ptr(void *ptr, flags_t *flags);

void printString(va_list ag, int *n_c, flags_t *flags);
void printStringX(va_list ag, int *n_c, flags_t *flags);
void printInt(va_list ag, int *p_n_c, flags_t *flags);
void printChar(va_list ag, int *n_c, flags_t *flags);
void printBinary(va_list ag, int *n_c, flags_t *flags);
void print_undec(va_list ag, int *n_c, flags_t *flags);
void printReverseString(va_list ag, int *n_c, flags_t *flags);
void printStringROT13(va_list ag, int *n_c, flags_t *flags);
void print_unoc(va_list ag, int *n_c, flags_t *flags);
void printHex(va_list ag, int *n_c, flags_t *flags);
void printhex(va_list ag, int *n_c, flags_t *flags);
void printptr(va_list ag, int *n_c, flags_t *flags);


void print_with_flags(char *data, flags_t *flags);
#endif
