#include "main.h"

/**
 * print_HEX - prints a hexadecimal number in uppercase
 * @val: arguments
 * Return: count of printed characters
 */
int print_HEX(va_list val)
{
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);

	count += print_hex_upper(num);

	return (count);
}
