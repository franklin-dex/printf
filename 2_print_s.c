#include "main.h"

/**
 * print_s - print a string
 * @val: arguments
 * Return: counter
 */
int print_s(val_list val)
{
	char *str = va_arg(val, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}
