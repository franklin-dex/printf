#include "main.h"

/**
 * print_oct - prints an octal number
 * @val: arguments
 * Return: count of printed characters
 */
int print_oct(va_list val)
{
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);

	count += print_oct(num);

	return (count);
}
