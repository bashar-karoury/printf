#include "../main.h"
#include <stdio.h>

int main() {
	unsigned int num = 3455;
	print_un_hex(num);
	printf("\n%x", num);
	putchar('\n');
	print_un_Hex(num);
	printf("\n%X", num);
	putchar('\n');

	return 0;
}
