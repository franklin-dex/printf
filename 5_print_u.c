#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @val: arguments
 * Return: count of printed characters
 */
int print_unsigned(va_list val)
{
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);

	count += print_number(num);

	return (count);
}
