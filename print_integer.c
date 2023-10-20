#include "main.h"
#include <stdlib.h>

/**
 * printInt - doc
 * @ag: doc
 * @n_c: doc
 */

void printInt(va_list ag, int *n_c, flags_t *flags)
{
	*n_c += print_Integer(va_arg(ag, int), flags);
}

/**
 * print_Integer - prints an givan integer
 * @num: given int
 * Return: integer length
 */

int print_Integer(int num, flags_t *flags)
{
	int numDigits = 0, temp = 0, i = 0, is_negative = 0;
	char *digits;
	unsigned int x;

	if (num < 0)
	{
		_putchar('-');
		x = -num;
		is_negative = 1;
	}
	else if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	else
		x = num;
	temp = x;
	while (temp != 0)
	{
		temp /= 10;
		numDigits++;
	}
	digits = (char *)malloc((numDigits + 1) * sizeof(char));
	if (digits != NULL)
	{
		for (i = numDigits - 1; i >= 0; i--)
		{
			digits[i] = '0' + (x % 10);
			x /= 10;
		}
		digits[numDigits] = '\0';
		for (i = 0; i < numDigits; i++)
		{
			_putchar(digits[i]);
		}
		free(digits);
		return (numDigits + is_negative);
	}
	return (0);
}
