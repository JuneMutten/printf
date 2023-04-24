#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#define Buffer_Size 1024

/**
 * print_decimal - Function that converts an unsigned int to unsigned decimal
 * @list: List of arguments
 * @buffer: Buffer array to handle print
 * 
 * Return: Number of chars printed.
 */
int print_decimal(va_list list, char buffer[])
{
	int i = Buffer_Size - 2;
	unsigned long int num = va_arg(list, unsigned long int);
	int printed_chars = 0;

	if (num == 0)
		buffer[i--] = '0';

	buffer[Buffer_Size - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';
		num /= 10;
	}

	i++;

	for (int j = i; j < Buffer_Size - 1; j++)
	{
		printed_chars += putchar(buffer[j]);
	}

	return printed_chars;

