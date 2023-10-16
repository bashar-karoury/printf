#include "main.h"


void printMod(va_list ag, int *n_c)
{
	*n_c += print_modulus_mark();

}

/**
 * print_modulus_mark - prints "%"
 * Return: void
 */

int print_modulus_mark(void)
{
	_putchar(37);
	return (1);
}
