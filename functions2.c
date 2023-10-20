#include "main.h"

/**
 * convert_to_Hex - Converts a number to hexadecimal
 * @num: Number to be converted
 * Return: Number of characters printed
*/

int convert_to_Hex(unsigned int num)
{
	int i, digit, count = 0;
	char hex_digits[] = "0123456789ABCDEF";
	char hex_buffer[16];

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		digit = num % 16;
		hex_buffer[count] = hex_digits[digit];
		num /= 16;
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(hex_buffer[i]);
	}
	return (count);
}

#include "main.h"

/**
 * print_X - Prints a hexadecimal number.
 * @args: Arguments.
 * Return: Number of arguments printed
 */
int print_X(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0, i = 0, j, digits[32];
	char hex_digits[] = "0123456789ABCDEFGH";

	if (num == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}

	while (num > 0)
	{
		digits[i] = num % 16;
		num /= 16;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hex_digits[digits[j]]);
		count++;
	}

	return (count);
}

/**
 * print_x - Prints a hexadecimal number
 * @args: Arguments
 * Return: Number of characters printed
 */

int print_x(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0, i = 0, j, digits[32];
	char hex_digits[] = "0123456789abcdef";

	if (num == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}

	while (num > 0)
	{
		digits[i] = num % 16;
		num /= 16;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hex_digits[digits[j]]);
		count++;
	}

	return (count);
}

/**
 * print_o - Prints an octal number
 * @args: Arguments
 * Return: The number of characters printed
 */

int print_o(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0, octal_digits[32], i;

	if (num == 0)
	{
		_putchar('0');
		return (0);
	}

	while (num > 0)
	{
		octal_digits[count++] = num % 8;
		num /= 8;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(octal_digits[i] + '0');
	}

	return (count);
}

/**
 * print_u - Prints unsigned integer
 * @args: Arguments
 * Return: Number of characters printed
 */
int print_u(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int i = 0, index = 0, j;
	char buffer[20];

	if (num == 0)
	{
		_putchar('0');
		return (0);
	}

	while (num > 0)
	{
		buffer[index++] = (num % 10) + '0';
		num /= 10;
	}

	for (j = index - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
		i++;
	}

	return (i);
}

