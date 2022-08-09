#include "main.h"

/**
 * _printf - produces an output according to a format
 * @format: is the specified format
 *
 * Return: it returns the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list list;
	int n = 0, print = 0, printchar = 0;
	int i = 0;
	int flags, width, precision, size;
	char buf[BUFSIZE];

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (; format[i] != '\0'; )
	{
		if (format[i] != '%')
		{
			buf[n++] = format[i];
			if (n == BUFSIZE)
				print_buf(buf, &n);
			printchar++;
		}
		else
		{
			print_buf(buf, &n);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
			print = handle_print(format, &i, list, buf, flags, width, precision, size);
			if (print == -1)
				return (-1);
			printchar += print;
		}
	}
	print_buf(buf, &n);
	va_end(list);
	return (printchar);
}
