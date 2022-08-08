#include "main.h"

/**
 * print_string - prints a string
 * @string: the string to be printed
 *
 * Return: number of characters in the string
 */

int print_string(char *string)
{
	int i;
	int count = 0;

	for (i = 0; string[i] != '\0'; i++)
	{
		count += _putchar(string[i]);
	}
	return (count);
}
