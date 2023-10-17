#include <stdio.h>
#include "../main.h"

int main(void)
{	
	int n1;
	n1 = _printf("%b", 8);
	printf("%d", n1);
	printf("\n------------------------------\n");
	n1 = _printf("%b\n", 8);
	printf("%d", n1);
	printf("\n------------------------------\n");
	n1 = _printf("binary %b", 8);
	printf("%d", n1);
	printf("\n------------------------------\n");
	n1 = _printf("MAX = %b", 1000000);
	printf("%d", n1);
	printf("\n------------------------------\n");
	return (0);

}
