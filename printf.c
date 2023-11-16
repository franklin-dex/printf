#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 * @...: Variable number of arguments
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
    va_list args;
    int i, j, len = 0;
    int (*func)(va_list);

    convert_match m[] = {
        {"%c", printf_char},
        {"%s", printf_string},
        {"%%", printf_37},
        {"%i", printf_int},
        {"%d", printf_dec},
        {"%r", printf_srev},
        {"%R", printf_rot13},
        {"%b", printf_bin},
        {"%u", printf_unsigned},
        {"%o", printf_oct},
        {"%x", printf_hex},
        {"%X", printf_HEX},
        {"%S", printf_exclusive_string},
        {"%p", printf_pointer},
        {NULL, NULL}
    };

    va_start(args, format);

    for (i = 0; format && format[i]; i++)
    {
        if (format[i] == '%' && format[i + 1] != '\0')
        {
            for (j = 0; m[j].id; j++)
            {
                if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
                {
                    len += m[j].f(args);
                    i++;
                    break;
                }
            }
            if (!m[j].id)
            {
                _putchar('%');
                len++;
            }
        }
        else
        {
            _putchar(format[i]);
            len++;
        }
    }

    va_end(args);

    return (len);
}
