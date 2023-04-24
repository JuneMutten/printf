#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * find_length - Function that finds the size of the argument
 * @format: String to point the arguments to
 * @i: List of arguments to be printed
 * 
 * Return: Lenght
*/

int find_length(const char *format, int *i)
{
    int current_i = *i + 1;
    int size = 0;

    const int Short_Length = sizeof(short);
    const int Long_Length = sizeof(long);

    if (format[current_i] == 'l')
        size = Short_Length;
    else if (format[current_i] == 'h')
        size = Long_Length;

    if (size == 0)
        *i = current_i - 1;
    else
        *i = current_i;

    return (size);
}