#include "main.h"
#include <stdlib.h>
#include <stdio.h>

static char *Convert_Int_to_Ascii(int num, int *n);
/**
 * printInt - doc
 * @ag: doc
 * @n_c: doc
 * @flags: pointer to flags_t struct
 */

void printInt(va_list ag, int *n_c, flags_t *flags)
{
	*n_c += print_Integer(va_arg(ag, int), flags);
}

/**
 * print_Integer - prints an givan integer
 * @num: given int
 * @flags: pointer to flags_t struct
 * Return: integer length
 */

int print_Integer(int num, flags_t *flags)
{
	int numDigits = 0, n = 0;
	char *digits;

	digits = Convert_Int_to_Ascii(num, &numDigits);
	if (num < 0)
	{
		digits = AddCharBeforeString(digits, '-', numDigits);
		numDigits++;

	}
	else
	{
		if (flags->plus == 1)
		{
			digits = AddCharBeforeString(digits, '+', numDigits);
			numDigits++;
		}
		else if (flags->space == 1)
		{
			digits = AddCharBeforeString(digits, ' ', numDigits);
			numDigits++;
		}

	}

	if (digits != NULL)
	{
		n = check_width_and_print(digits, numDigits, flags);
		free(digits);
	}
	return (n);
}


/**
* Convert_Int_to_Ascii - converts integar to string of ascii chars
* @num: integar to be converted
* @n: pointer to int to return length of produced string
*
* Return: pointer to result string. IT IS DYNAMICALLY ALLOCATED
* SHOULD BE FREED AFTER USE
*/
static char *Convert_Int_to_Ascii(int num, int *n)
{
	int i = 0;
	unsigned int temp = 0;
	int  numDigits = 0;
	unsigned int x = 0;
	char *digits = NULL;

	if (num < 0)
	{
		x = -num;
	}
	else
	{
		x = num;
	}
	temp = x;
	while (temp != 0)
	{
		temp /= 10;
		numDigits++;
	}
	if (x == 0)
		numDigits = 1;
	digits = (char *)malloc((numDigits) * sizeof(char));
	if (digits != NULL)
	{
		for (i = numDigits - 1; i >= 0; i--)
		{
			digits[i] = '0' + (x % 10);
			x /= 10;
		}
		*n = numDigits;
	}
	return (digits);

}
