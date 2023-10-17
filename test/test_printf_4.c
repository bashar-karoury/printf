#include <stdio.h>
#include "../main.h"

int main(void)
{	
	int n1, n2;
	printf("\n-------------------------------\n");
	n1 = _printf("css%cccs%scscscs", 'T', "Test");
	printf("\n-------------------------------\n");
	n2 =  printf("css%cccs%scscscs", 'T', "Test");
	printf("\n-------------------------------\n");
	printf("RESULT = %s\n" ,(n1 == n2)? "PASS":"FAIL");
	printf("\n-------------------------------\n");
	n1 = _printf("%K\n");
	printf("\n-------------------------------\n");
	n2 =  printf("%K\n");
	printf("\n-------------------------------\n");
	printf("RESULT = %s\n" ,(n1 == n2)? "PASS":"FAIL");
	printf("\n-------------------------------\n");
	n1 = _printf(NULL);
	printf("\n-------------------------------\n");
	n2 =  printf(NULL);
	printf("\n-------------------------------\n");
	printf("RESULT = %s\n" ,(n1 == n2)? "PASS":"FAIL");
	printf("\n-------------------------------\n");
	n1 = _printf("%s", NULL);
	printf("\n-------------------------------\n");
	n2 =  printf("%s", NULL);
	printf("\n-------------------------------\n");
	printf("n1 = [%d], n2 = [%d]\n", n1, n2);
	printf("RESULT = %s\n" ,(n1 == n2)? "PASS":"FAIL");
	printf("\n-------------------------------\n");
	n1 = _printf("%          r           r", NULL);
	printf("\n-------------------------------\n");
	n2 =  printf("%          r           r", NULL);
	printf("\n-------------------------------\n");
	printf("n1 = [%d], n2 = [%d]\n", n1, n2);
	printf("RESULT = %s\n" ,(n1 == n2)? "PASS":"FAIL");
	printf("\n-------------------------------\n");
	n1 = _printf("%r           r", NULL);
	printf("\n-------------------------------\n");
	n2 =  printf("%r           r", NULL);
	printf("\n-------------------------------\n");
	printf("n1 = [%d], n2 = [%d]\n", n1, n2);
	printf("RESULT = %s\n" ,(n1 == n2)? "PASS":"FAIL");
	



	return (0);

}
