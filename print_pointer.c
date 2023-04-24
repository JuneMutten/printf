#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_pointer - Function that prints the value of pointer
 * @list: List of arguments
 * @buffer: Buffer array to store printed values
 * 
 * Return: Number of characters printed
*/

int print_pointer(va_list list, char buffer[])
{
    unsigned long num_addrs = (unsigned long) va_arg(list, void *);
    char map_to[] = "0123456789abcdef";
    int length = 0;

    if (num_addrs == 0) {
        return printf(buffer, "(nil)");
    }

    while (num_addrs > 0) {
        buffer[length++] = map_to[num_addrs % 16];
        num_addrs /= 16;
    }

    buffer[length++] = 'x';
    buffer[length++] = '0';
    reverse_string(buffer, length);

    return length;
}
