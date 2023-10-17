#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Prints a character
 * @args: Arguments
 * Return: 0
*/

int print_char(va_list args)
{
	_putchar(va_arg(args, int));

	return (0);
}
