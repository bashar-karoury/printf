#include <stdio.h>
#include "../main.h"

int main(void)
{	
	int n1, n2;
	printf("-------------------------------\n");
	n1 = _printf("Let's print a simple sentence.\n");
	n2 = printf("Let's print a simple sentence.\n");
	printf("RESULT = %s\n" ,(n1 == n2)? "PASS":"FAIL");
	printf("-------------------------------\n");
	n1 = _printf("%c", 'S');
	n2 = printf("%c", 'S');
	printf("RESULT = %s\n" ,(n1 == n2)? "PASS":"FAIL");
	printf("-------------------------------\n");
	n1 = _printf("A char inside a sentence : %c. Dit it work?\n", 'F');
	n2 = printf("A char inside a sentence : %c. Dit it work?\n", 'F');
	printf("RESULT = %s\n" ,(n1 == n2)? "PASS":"FAIL");
	printf("-------------------------------\n");
	n1 = _printf("Let'see if the cast is coreectly done: $c. Did it work?\n"
			, 48);
	n2 = printf("Let'see if the cast is coreectly done: $c. Did it work?\n"
			, 48);
	printf("RESULT = %s\n" ,(n1 == n2)? "PASS":"FAIL");


	printf("-------------------------------\n");
	n1 = _printf(NULL);
	n2 = printf(NULL);
	printf("RESULT = %s\n" ,(n1 == n2)? "PASS":"FAIL");


	printf("-------------------------------\n");
	n1 = _printf("%c", '\0');
	n2 = printf("%c", '\0');
	printf("RESULT = %s\n" ,(n1 == n2)? "PASS":"FAIL");



	printf("-------------------------------\n");
	n1 = _printf("%");
	n2 = printf("%");
	printf("RESULT = %s\n" ,(n1 == n2)? "PASS":"FAIL");
	return (0);

}
