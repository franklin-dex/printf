#include "main.h"

/**
 * print_d - prints and integer
 * @val: arguments
 * Return: counter
 */
int print_d(va_list val)
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

/**
 * print_number - prints a positive integer.
 * @num: positive integer to print.
 * Return: counter.
 */
int print_number(int num)
{
	int count = 0;

	if (num / 10)
		count += print_number(num);

	_putchar(num % 10 + '0');
	count++;

	return (count)
}
