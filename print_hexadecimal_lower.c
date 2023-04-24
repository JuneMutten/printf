#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_hexadecimal_lower - Function that prints hexadecimal in lowercase
 * @list: List of arguments
 * @buffer: Buffer array to store printed values
 * 
 * Return: Number of characters to be printed
*/

int print_hexadecimal_lower(va_list list, char buffer[])
{
    return (print_hexadecimal(list, "0123456789abcdef", 'x', buffer));
}