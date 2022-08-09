#include "main.h"
#include <stdlib.h>

/**
 * print_decimal - prints decimal digits
 *@value: the digit passed
 *
 * Return: count
 */

int print_decimal(int value)
{
	int count = 0;

	if (value < 0)
	{
		count += _putchar('-');
		value = value * -1;
	}
	if (value / 10)
	{
		/* value = 98 */
		count += print_decimal(value / 10); /* prints 9 */
	}
	count += _putchar((value % 10) + '0'); /* prints 8 */
	return (count);
}
