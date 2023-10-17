#include "../main.h"
#include <stdio.h>

int main() {
	unsigned int num = 44;
	int x = -3;
	print_un_dec(num);
	putchar('\n');
	printf("%u\n", num);
	print_un_dec(x);
	putchar('\n');
	printf("%u\n", x);

    return 0;
}
