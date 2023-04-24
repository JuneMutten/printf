#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_binary - Function that converts an unsigned int argument to binary
 * @list: List of arguments
 * @buffer: Buffer array to store printed values
 * @flags:  Calculates flags
 * @width: Calculates the width
 * @precision: Specifies number of flags to be printed
 * @length: Size of data being printed
 *
 * Return: Numbers of characters printed
*/

int print_binary(va_list list, char buffer[], int flags, int width, int precision, int length)
{
    unsigned int n = va_arg(list, unsigned int);
    unsigned int m = 2147483648;
    unsigned int a[32];
    int count = 0;

    a[32] = n / m;
    unsigned int i = 1;

    while (i < 32)
    {
        m /= 2;
        a[i] = (n / m) % 2;
        i++;
    }

    unsigned int j = 0;

    while (j < 32 && a[j] == 0)
    {
        j++;
    }

    while (j < 32)
    {
        char x = '0' + a[j];
        printf("%c\n", x);
        j++;
        count++;
    }

    return (count);
}
