#include "main.h"

int main(void)
{
	int num;

	num = 484;
	print_integer(num);

	num = -484;
	print_integer(num);

	num = 384939209382;/*can't handel more than the int type can store*/
	print_integer(num);

	return (0)
}
