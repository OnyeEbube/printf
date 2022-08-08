#include "main.h"
#include <unstd.h>
#include <stdarg.h>

/**
 * _printf - produces an output according to a format
 * @format: is the specified format
 *
 * Return: it returns the number of characters printed
 */

int _printf(const char *format, ...)
{
	int n = 0;
	int i = 0;
	va_list list;

	va_start(list, format);
	for (; format[i] != '\0'; i++)
	{
		if (format != %)
		{
			/* _prinf("Hello") must not be equal to % or \0 */
			/* we count the number of characters */
			n = n + _putchar(format[i]);
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
					default;
			}
			i = i + 2;
		}
	}
}
