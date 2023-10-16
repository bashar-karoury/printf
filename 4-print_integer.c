#include "main.h"
#include <stdlib.h>


void printInt(va_list ag, int *n_c)
{
	*n_c += print_Integer(va_arg(ag, int));
}

/**
 * print_integer - prints an givan integer
 * @num: given int
 * return: void
 */

int print_Integer(int num)
{
	int numDigits = 0;
	int temp = num;
	char *digits;
	int i;
	
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	while (temp != 0)
	{
		temp /= 10;
		numDigits++;
	}

	*digits = (char*)malloc((numDigits + 1) * sizeof(char));

	for (i = numDigits - 1; i >= 0; i--)
	{
		digits[i] = '0' + (num % 10);
		num /= 10;
	}

	digits[numDigits] = '\0';

	for (i = 0; i < numDigits; i++)
	{
		_putchar(digits[i]);
	}
	free(digits);
	return (numDigits);
}
