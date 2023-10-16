#include "main.h"

/**
 * print_integer - prints an givan integer
 * @num: given int
 * return: void
 */

void print_Integer(int num) 
{
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

	int numDigits = 0;
	int temp = num;

	while (temp != 0)
	{
		temp /= 10;
		numDigits++;
	}

	char digits[numDigits + 1];

	for (int i = numDigits - 1; i >= 0; i--)
	{
		digits[i] = '0' + (num % 10);
		num /= 10;
	}

	digits[numDigits] = '\0';

	for (int i = 0; i < numDigits; i++)
	{
		_putchar(digits[i]);
	}
}
