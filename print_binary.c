#include "main.h"

/**
 * print_binary - prints binary numbers
 * @x: the base 10 int to be converted
 *
 * Return: count
 */

int print_binary(int x)
{
	int count = 0, j;
	int arr[32], i = 0;

	while (x / 2 > 2)
	{
		arr[i] = x % 2;
		x = x / 2;
		i++;
	}
	for (j = i; j >= 0; j--)
	{
		count += _putchar(arr[j] + '0');
	}
	return (count);
}
