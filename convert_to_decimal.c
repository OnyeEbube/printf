#include "main.h"

/**
 * convertToDecimal - converts any integer to decimal
 * @num: the number passed into the function
 *
 * Return: the converted number
 */

long long convertToDecimal(int num, int base)
{
  int decimal = 0, i = 0;
  
  while (num != 0)
  {
    decimal += (num % 10) * power_recursion(base, i);
    ++i;
    num /= 10;
  }
  i = 1;
  return (decimal)
  }
