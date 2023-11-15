#include "main.h"

/**
 * print_number - prints a positive integer.
 * @num: positive integer to print.
 * Return: number of digits printed.
 */
int print_number(int num)
{
	int count = 0;

	if (num / 10)
		count += print_number(num / 10);

	_putchar(num % 10 + '0');
	count++;

	return (count);
}

/**
 * print_i - prints an integer.
 * @args: arguments.
 * Return: number of characters printed.
 */
int print_i(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	count += print_number(n);

	return (count);
}

/**
 * print_d - prints a decimal.
 * @args: arguments.
 * Return: number of characters printed.
 */
int print_d(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	count += print_number(n);

	return (count);
}

