#include "../main.h"
#include <limits.h>
#include <stdio.h>

int main(void)
{
	printf("minimum value of int using printf:\n%d\n", INT_MIN);

	printf("minimum value of int using print_integer\n");

	print_Integer(INT_MIN);

	printf("\nmaxmum value of int using printf:\n%d\n", INT_MAX);

	printf("maxmum value of int using print_integer\n");

	print_Integer(INT_MAX);

	printf("\n");
	
	print_Integer(-1);

	printf("\n");
	
	return (0);
}
