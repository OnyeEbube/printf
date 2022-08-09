#include "main.h"

/**
 * print_binary - prints binary numbers
 * @x: the base 10 int to be converted
 *
 * Return: count
 */

int print_binary(int x)
{
	int count = 0;
	int arr[32], i = 0;

	while (x / 2 > 2)
	{
		arr[i] = x % 2;
		x = x / 2;
		i++;
	}
	for (i; i >= 0; i--)
	{
		count += _putchar(arr[i] + '0');
	}
	return (count);
}
