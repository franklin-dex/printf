#include "main.h"

/**
 * print_i - prints an integer.
 * @val: arguments.
 * Return: counter.
 */
int print_i(va_list val)
{
	int num = va_arg(val, int);
	int count = 0;

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}

	count += print_number(num);

	return (count);
}
