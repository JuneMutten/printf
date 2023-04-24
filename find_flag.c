#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * find_flag - Function that finds the active flags
 * @format: String to point the arguments to
 * @i : Stores an argument
 * 
 * Return: Flag specifier
*/

int find_flag(const char *format, int *i)
{
    int flags = 0;
    int current_i = *i + 1;

    const int F_Plus = 1;
    const int F_Space= 2;
    const int F_Hash= 4;
    const int F_Zero = 8;
    const int F_Minus = 16;

    const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
    const int FLAGS_ARR[] = {F_Minus, F_Plus, F_Zero, F_Hash, F_Space, 0};

    while (format[current_i] != '\0')
    {
        char current_char = format[current_i];

        if (current_char == ' + ')
        {
            flags |= F_Plus;
        }
        else if (current_char == ' ')
        {
            flags |= F_Space;
        }
        else if (current_char == '#')
        {
            flags |= F_Hash;
        }
        else if (current_char == '0')
        {
            flags |= F_Zero;
        }
        else if (current_char == '-')
        {
            flags |= F_Minus;
        }
        else
        {
            break;
        }

        current_i++;       
    }

    *i = current_i - 1;
    return flags;
}