#include "../main.h"
#include <stdio.h>

int main(void)
{
	int n1;
	int *n = 0;
	int n2 = 0;

	n1 = _printf("%p",n);
	n2 = printf("%p", n);
	printf("\n n1 = %d , n2 = %d", n1 , n2);

	return (0);
}
