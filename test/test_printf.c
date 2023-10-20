#include "../main.h"
#include <stdio.h>

int main(void)
{
	int n1 = 0;
	int n2 = 0;

	n1 = _printf("%23s  %+d", "Sirelkhatim", 33);
	n2 = printf("%d\n", n1);
	printf("\n n1 = %d , n2 = %d", n1 , n2);

	return (0);
}
