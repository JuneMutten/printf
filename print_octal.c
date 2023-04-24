#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#define Buffer_Size 1024

/**
 * print_octal - Function that converts an unsigned int to unsigned octal
 * @list: List of arguments
 * @buffer: Buffer array to handle print
 * 
 * Return: Number of chars printed
 */

int print_octal(va_list list, char buffer[])
{
    int i = Buffer_Size - 2;
    unsigned long int num = va_arg(list, unsigned long int);
    unsigned long int init_num = num;

    if (num == 0)
        buffer[i--] = '0';

    buffer[Buffer_Size - 1] = '\0';

    while (num > 0)
    {
        buffer[i--] = (num % 8) + '0';
        num /= 8;
    }

    if (init_num != 0)
        buffer[i--] = '0';

    i++;

    int count = 0;
    while (buffer[i] != '\0')
    {
        putchar(buffer[i]);
        i++;
        count++;
    }

    return (count);
}