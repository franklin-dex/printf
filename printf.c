#include "main.h"
/**
 *_printf - is a function that selects the correct function to print.
 *@format: identifier to look for.
 *Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", print_s}, {"%c", print_c},
		{"%%", print_37},
		{"%i", print_i}, {"%d", print_d}, {"%r", print_revs},
		{"%R", print_rot13}, {"%b", print_bin}, {"%u", print_unsigned},
		{"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_exc_string}, {"%p", print_pointer}
	};

	va_list args;
		int i = 0, j, len = 0;

		va_start(args, format);
		if (format == NULL || (format[0] == '%' && format[1] == '\0'))
			return (-1);

Here:
		while (format[i] != '\0')
		{
			j = 13;
			while (j >= 0)
			{
				if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
				{
					len += m[j].f(args);
					i = i + 2;
					goto Here;
				}
				j--;
			}
			_putchar(format[i]);
			len++;
			i++;
		}
		va_end(args);
		return (len);
}
