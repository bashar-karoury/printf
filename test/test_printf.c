#include "../main.h"
#include <stdio.h>

int main(void)
{
	int n_c	= _printf("bashar %i Sirelkhatim   %c", 11, 'A');
	int n_c_s = printf("bashar %i Sirelkhatim   %c", 11, 'A');
	printf("\n");
	printf("standard printf  n_c =  %d \n our printf n_c = %d\n", n_c_s, n_c);
	return (0);
}
