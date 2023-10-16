#include "../main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	_printf("Let's try to printf a simple sentence.\n");
	_printf("%c\n", 'S');
	_printf("A char inside a sentence: %c. Did it work?\n", 'F');
	_printf("Let's see if the cast is correctly done: %c. Did it work?\n", 48);
	_printf("%%");
	_printf("Should print a single percent sign: %%\n");
	_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', "99", " Please wait", '\n');
	_printf("css%ccs%scscscs", 'T', "Test");
	_putchar('\n');
	_printf(NULL);
	_printf("%c", '\0');
	_printf("%");
	_printf("%K\n");
	return (0);
}
