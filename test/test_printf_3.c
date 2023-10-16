#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n1, n2;

    n1 = _printf("Let's try to printf a simple sentence.\n");
    n2 = printf("Let's try to printf a simple sentence.\n");
	printf("RESEULT : %s\n", (n1 == n2) ? "PASS":"FAIL" );
	printf("--------------------------------------------------\n");
    n1 = _printf("Length:[%d, %i]\n", 1000, 1000);
    n2 = printf("Length:[%d, %i]\n", 1000, 1000);
    
	printf("RESEULT : %s\n", (n1 == n2) ? "PASS":"FAIL" );
	printf("--------------------------------------------------\n");

	n1 = _printf("Negative:[%d]\n", -762534);
    n2 = printf("Negative:[%d]\n", -762534);
    
	printf("RESEULT : %s\n", (n1 == n2) ? "PASS":"FAIL" );
	printf("--------------------------------------------------\n");

	n1 = _printf("Character:[%c]\n", 'H');
    n2 = printf("Character:[%c]\n", 'H');
    
	printf("RESEULT : %s\n", (n1 == n2) ? "PASS":"FAIL" );
	printf("--------------------------------------------------\n");

	n1 = _printf("String:[%s]\n", "I am a string !");
    n2 = printf("String:[%s]\n", "I am a string !");
    
	printf("RESEULT : %s\n", (n1 == n2) ? "PASS":"FAIL" );
	printf("--------------------------------------------------\n");

	n1 = _printf("Percent:[%%]\n");
    n2 = printf("Percent:[%%]\n");
    
	printf("RESEULT : %s\n", (n1 == n2) ? "PASS":"FAIL" );
	printf("--------------------------------------------------\n");

	n1 = _printf("Len:[%d]\n", 55);
    n2 = printf("Len:[%d]\n", 55);
   
	printf("RESEULT : %s\n", (n1 == n2) ? "PASS":"FAIL" );
	printf("--------------------------------------------------\n");
   return (0);
}
