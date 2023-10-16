#include <unistd.h>
#include "main.h"
/**
 * _putchar - entry point
 * @c: input
 * Return: printed char
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (c);
}
