#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_string - Prints a string
 * @args: Arguments
 * Return: Length of the string
*/
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i, len;

	if (str == NULL)
	{
		str = "null";
		len = strlen(str);

		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}

	else
	{
		len = strlen(str);

		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}
