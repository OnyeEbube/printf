#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - produces an output according to a format
 * @format: is the specified format
 *
 * Return: it returns the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list list;
	int n = 0;
	int i = 0;

	va_start(list, format);
	for (; format[i] != '\0'; )
	{
		if (format[i] != '%')
		{
			/* _prinf("Hello") must not be equal to % or \0 */
			/* we count the number of characters */
			n = n + _putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
			{
				case 'c':
					/* print a character from the va_arg*/
					n  = n + _putchar(va_arg(list, int));
					break;
				case 's':
					n += print_string(va_arg(list, char *));
					break;
				case '%':
					n = n + _putchar('%');
					break;
				case 'd':
					n = n + print_decimal(va_ard(list, int));
					break;
				default:
					break;
			}
			i = i + 2;
		}
	}
	va_end(list);
	return (n);
}
