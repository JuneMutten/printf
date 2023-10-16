#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Produces output according to a format
 * @format: Character string passed to function
 * @...: Variable arguments
 * Return: Number of characters printed
*/
int _printf(const char *format, ...)
{
	convert_if_match a[] = {{"%s", print_string}, {"%c", print_char},
		{"%%", print_percent}};

	int i = 0, count = 0, j = 2;
	va_list args;

	va_start(args, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}

	while (*format != '\0')
	{
		while (j >= 0)
		{
			if (a[j].id[0] == *format && m[j].id[i] == *(format + 1))
			{
				count += m[j].f(args);
				format += 2;
			}
			j++;
		}
	_putchar(*format);
	count++;
	format++;
	}
	va_end(args);
	return (count);
}
