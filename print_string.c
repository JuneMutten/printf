#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_string - Function that prints a string
 * @list: List of arguments
 * 
 * Return: Number of characters printed
*/

int print_string(va_list list)
{
    char *str = va_arg(list, char *);
    
    if (str == NULL)
    {
        str = "(null)";
    }

    int printed_chars = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((char) str[i] < 32 || (char) str[i] >= 127)
        {
            printed_chars += printf("\\x%02X", (char) str[i]);
        }

        else

        {
            printed_chars += printf("%c", str[i]);
        }
    }

     return printed_chars;
    }
    
