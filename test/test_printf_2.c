#include "../main.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{	
	int n1, n2;

	n1 = _printf("Let's try to printf a simple sentence.\n");
	n2 = printf("Let's try to printf a simple sentence.\n");
	printf ("Result = %s\n", (n1 == n2)? "PASS":"FAIL");
	printf("-----------------------------------------------------\n");
	n1 = _printf("%c\n", 'S');
	n2 = printf("%c\n", 'S');
	
	printf ("Result = %s\n", (n1 == n2)? "PASS":"FAIL");
	printf("-----------------------------------------------------\n");
	n1 = _printf("A char inside a sentence: %c. Did it work?\n", 'F');
	n2 = printf("A char inside a sentence: %c. Did it work?\n", 'F');
	
	printf ("Result = %s\n", (n1 == n2)? "PASS":"FAIL");
	printf("-----------------------------------------------------\n");
	n1 = _printf("Let's see if the cast is correctly done: %c. Did it work?\n", 48);
	n2 = printf("Let's see if the cast is correctly done: %c. Did it work?\n", 48);
	
	printf ("Result = %s\n", (n1 == n2)? "PASS":"FAIL");
	printf("-----------------------------------------------------\n");
	n1 =_printf("%%");
	n2 = printf("%%");
	
	printf ("Result = %s\n", (n1 == n2)? "PASS":"FAIL");
	printf("-----------------------------------------------------\n");
	n1 = _printf("Should print a single percent sign: %%\n");
	n2 = printf("Should print a single percent sign: %%\n");
	
	printf ("Result = %s\n", (n1 == n2)? "PASS":"FAIL");
	printf("-----------------------------------------------------\n");
	n1 = _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', "99", " Please wait", '\n');
	n2 = printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', "99", " Please wait", '\n');
	printf("n1 = %d, n2 = %d \n", n1, n2);	
	printf ("Result = %s\n", (n1 == n2)? "PASS":"FAIL");
	printf("-----------------------------------------------------\n");
	n1 = _printf("css%ccs%scscscs\n", 'T', "Test");
	n2 = printf("css%ccs%scscscs\n", 'T', "Test");
	
	printf ("Result = %s\n", (n1 == n2)? "PASS":"FAIL");
	printf("-----------------------------------------------------\n");
	n1 = _putchar('\n');
	n2 = putchar('\n');
	
	printf("n1 = %d, n2 = %d \n", n1, n2);	
	printf ("Result = %s\n", (n1 == n2)? "PASS":"FAIL");
	printf("-----------------------------------------------------\n");
	n1 = _printf(NULL);
	n2 = printf(NULL);
	
	printf ("Result = %s\n", (n1 == n2)? "PASS":"FAIL");
	printf("-----------------------------------------------------\n");
	n1 = _printf("%c", '\0');
	n2 = printf("%c", '\0');
	
	printf ("Result = %s\n", (n1 == n2)? "PASS":"FAIL");
	printf("-----------------------------------------------------\n");
	n1 = _printf("%");
	n2 = printf("%");
	
	printf ("Result = %s\n", (n1 == n2)? "PASS":"FAIL");
	printf("-----------------------------------------------------\n");
	n1 = _printf("%K\n");
	n2 = printf("%K\n");

	printf ("Result = %s\n", (n1 == n2)? "PASS":"FAIL");
	return (0);
}
