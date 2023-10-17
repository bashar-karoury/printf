#include "../main.h"
#include <stdio.h>

int main(void)
{
	int n2;

	n2 =  _printf("%r", "rahsab");

	printf("n2 = %d\n", n2);

    n2 =  printf("%h", 3);

    printf("n2 = %d\n", n2);



    n2 =  printf("%+hhhh\n", 3);

    printf("n2 = %d\n", n2);
	return (0);
}
