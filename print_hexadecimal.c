#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#define Buffer_Size 1024

/**
 * print_hexadeimal - Function that will be called to print in either upper or lower case
 * @list: List of arguments
 * @buffer: Buffer array to store printed values
 * 
 * Return: Number of characters to be printed
 * 
*/

int print_hexadecimal(va_list list, char buffer[])
{
    int i = Buffer_Size - 2;
    unsigned long int num = va_arg(list, unsigned long int);
    unsigned long int init_num = num;
    int count = 0;

    if (num == 0)
    {
        buffer[i--] = '0';
        count++;
    }

    while (num > 0)
    {
        int modulus = num % 16;
        if (modulus < 10)
        {
            buffer[i--] = '0' + modulus;
        }
        else
        {
            buffer[i--] = 'a' + (modulus - 10);
        }
        num /= 16;
        count++;
    }

    if (init_num != 0)  
    {
        buffer[i--] = 'x';
        buffer[i--] = '0';
        count += 2;
    }

    i++;

    int j;
    for (j = i; j <= Buffer_Size - 2; j++)
    {
        putchar(buffer[j]);
    }

    return count;
}
