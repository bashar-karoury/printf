#include "main.h"
#include <stdlib.h>

/**
 * printBinary - doc
 * @ag: doc
 * @n_c: doc
 */

void printBinary(va_list ag, int *n_c, flags_t *flags)
{
	*n_c += print_Binary(va_arg(ag, unsigned int), flags);
}

/**
 * print_Binary - prints an givan integer formatted as binary
 * @num: given int
 * Return: integer length
 */

int print_Binary(unsigned int num, flags_t *flags)
{
	int i = 0;
	int first_one = 0;
	int temp = 0;
	int n = 0;
	char data[32] = {0};
	int data_len = 0;

	if (num == 0)
	{
		data_len = 1;		
	}
	else 
	{
		for (i = 31; i >= 0; i--)
		{
			temp = ((num >> i) & (0x01));
			if (temp)
			{
				first_one = 1;
			}
			if (first_one)
			{	
				data[31 - i] = temp + '0';
				data_len++;
				n += print_c(temp + '0', flags);
			}
		}
	}
	//--------- Call Omer PrintWithWidth----------//
	n  =   ----- (data , data_len, flags);	

	return (n);
}
