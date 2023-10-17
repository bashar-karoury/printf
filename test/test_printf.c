#include "../main.h"
#include <stdio.h>

int main(void)
{
	int n1,n2;

	n1 = _printf("%             %", -1);
	n2 =  printf("%             %", -1);

	printf("n1 = %d, n2 = %d\n", n1, n2);
	return (0);
}
