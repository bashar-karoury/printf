#include "main.h"
#include <stddef.h>


/**
* print_h - print passed character as hex in 2 digits upper case
* @c: char to be printed
*
* Return: number of characters printed
*/
static void convert_h(char c, char *data);
/**
 * printStringX - doc
 * @ag: doc
 * @n_c: doc
 */

void printStringX(va_list ag, int *n_c, flags_t *flags)
{
	char *str = NULL;
	char null[] = "(null)";

	str = va_arg(ag, char *);
	if (str != NULL)
	{
		*n_c += print_string_x(str, flags);
	}
	else
	{
		*n_c += print_string(null, flags);
	}
}

/**
 * print_string_x - print given string
 * @str: given string
 * Return: void
 */

int print_string_x(char *str, flags_t *flags)
{
	int x = 0;
	int n = 0;
	int len = 0;
	char *data = NULL;
	int idx = 0;

	len = string_len(str);
	data = malloc(len * 4); 
	if(data == NULL)
	{
		return 0;
	}
	while (str[x] != '\0')
	{
		if ((str[x] < 32) || (str[x] >= 127))
		{	
			data[idx++] = '\\';
			data[idx++] = 'x';
			convert_h(str[x], &data[idx]);
			idx += 2;
		}
		else
		{	
			data[idx++] = str[x];
		}
		x++;
	}

	n =  check_width_and_print(data, idx, flags);
	free(data);
	return (n);
}

/**
* print_h - print passed character as hex in 2 digits upper case
* @c: char to be printed
*
* Return: number of characters printed
*/
static void convert_h(char c, char *data)
{
	char hi = 0;
	char lo = 0;

	char S[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
				 'A', 'B', 'C', 'D', 'E', 'F'};
	hi = ((c >> 4) & 0x0F);
	lo = (c & 0xF);
	data[0] = S[(int)hi];
	data[1] = S[(int)lo];
}
