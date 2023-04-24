#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_rot13string - Function that prints a string in rot13
 * @list: List of arguments
 * @buffer: Buffer array to handle print
 * 
 * Return: Numbers of characters to be printed
*/

int print_rot13string(va_list list, char buffer[])
{
    char *str = va_arg(list, char *);

    if (str == NULL)
        str = "(Empty)";

    int count = 0;
    for (; *str; str++)
    {
        char c = *str;
        if (c >= 'A' && c <= 'Z')
            c = 'A' + (c - 'A' + 13) % 26;
        else if (c >= 'a' && c <= 'z')
            c = 'a' + (c - 'a' + 13) % 26;
        write(1, &c, 1);
        count++;
    }

    return count;
}
