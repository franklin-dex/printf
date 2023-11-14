#include "main.h"

/**
 * print_c - print a character
 * @val: arguments
 * Return: counter
 */
int print_c(va_list val)
{
	char c = va_arg(val, int);

	_putchar(c);

	return (1);
}
