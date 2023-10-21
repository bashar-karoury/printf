#include <stdio.h>
#include "main.h"

/**
 *
 */

void print_output(char *output, int len)
{
	int count;

	for (count = 0; count < len; count++)
	{
		_putchar(output[count]);
	}
}

int check_width_and_print(char *output, int outputlength, flags_t *flags)
{
	int flowwidth = (flags->width - outputlength);
	int xyz = flowwidth;
	int len = 0;

	if (flowwidth > 0)
	{
		if (flags->justify == 1)
		{
			print_output(output, outputlength);
			while (xyz > 0)
			{
				xyz--;
			}
		}
		else
		{
			while (xyz > 0)
			{
				_putchar(' ');
				xyz--;
			}
			print_output(output, outputlength);
		}
		len = flags->width;
	}
	else
	{
		print_output(output, outputlength);
		len = outputlength;
	}
	return (len);
}
