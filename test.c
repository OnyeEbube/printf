#include <limits.h>
#include "main.h"
#include <stdio.h>

int main(void)
{
	int len;

	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	return (0);
}
