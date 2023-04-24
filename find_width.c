#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * find_width - Function that finds the width to be printed
 * @format: String to point the arguments to
 * @list: List of arguments
 * @i: List of arguments to be printed
 * 
 * Return: Width
*/

int find_width(const char *format, int *i, va_list list)
{
    int current_i = *i + 1;
    int width = 0;
    
    while (format[current_i] != '\0')
    {
        if (format[current_i] >= '0' && format[current_i] <= '9')
        {
            width *= 10;
            width += format[current_i] - '0';
        }
        else if (format[current_i] == '*')
        {
            current_i++;
            width = va_arg(list, int);
            break;
        }
        else
            break;
            
        current_i++;
    }
    
    *i = current_i - 1;
    
    return width;
}