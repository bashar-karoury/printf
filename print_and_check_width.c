#include <stdio.h>
#include "main.h"

/**
 *
 */

void print_output(char *out_put)
{
	int count;

	for (count = 0; output[count] != '\0'; count++)
	{
		_putchar(output[count]);
	}
}

int check_wi_and_print(char *output, int outputlength,
					int flagwidth, flags_t *flags)
{
	int flowwidth = (flagwidth - outputlength);
	int xyz = flowwidth;

	if (flags->width == 1 && flowwidth > 0)
	{
		if (flags->justify == 1)
		{
			print_output(*output);
			while (xyz > 0)
			{
				if (flags->zerofilled == 1)
					_putchar('0');

				else
					_putchar(' ');

				xyz--;
			}
		}
		else
		{
			while (xyz > 0)
			{
				if (flags->zerofilled == 1)
					_putchar('0');

				else
					_putchar(' ');

				xyz--;
			}
			print_output(*output);
		}
	}
	else
	{
		print_output(*output);
	}
	return (outputlength + flagwidth);
}
