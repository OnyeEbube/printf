#include <unistd.h>
#include "main.h"

/**
 * print_buf - prints the charaters in an array
 * @buf: an array of chars
 * @n: index
 */

void print_buf(char buf[], int *n)
{
	if (*n > 0)
		write(1, &buf, *n);
	*n = 0;
}
