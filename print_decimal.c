#include "main.h"

/**
 * print_decimal - prints decimal digits
 *@value: the digit passed
 
 * Return: count
 */

int print_decimal(int value)
{
  int count = 0;
  
  if (value >= 0)
  {
    /* value = 98 */
    print_decimal(value / 10); /* prints 9 */
    count += _putchar(value % 10); /* prints 8 */
  }
  return (count);
}
