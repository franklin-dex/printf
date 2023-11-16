#include "main.h"

/**
 * print_hex - prints a hexadecimal number in lowercase
 * @val: arguments
 * Return: count of printed characters
 */
int print_hex(va_list val)
{
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);

	count += print_hex_lower(num);

	return (count);
}
