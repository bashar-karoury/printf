#include "../main.h"
#include <stdio.h>

int main(void)
{
	int n1;
	int n;
	int n2 = 0;

	n1 = _printf("%p",&n);
	n2 = printf("%p", &n);

	_printf("\n%d --- %d\n",n1, n2);

	return (0);
}
