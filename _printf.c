#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - Function that produces an output according to a format
 * @format: Character string with 0 or more directives
 * 
 * Return: Number of characters printed excluding null byte 
*/

int _printf(const char *format, ...)
{
    va_list list;
    va_start(list, format);

    int count = 0;

    for (int i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            i++;
            switch (format[i])
            {
                case 'c': 
                {
                    char c = (char)va_arg(list, int);
                    printf("%c\n", c);
                    count++;
                    break;
                }

                case 's': 
                {
                    char *str = va_arg(list, char *);
                    printf("%s\n", str);
                    int len = 0;

                    while (str[len])
                        len++;
                    count += len;
                    break;
                }

                case '%': 
                {
                    printf("%%\n");
                    count++;
                    break;
                }

                default:
                {
                    printf("%%%c\n", format[i]);
                    count += 2;
                    break;
                }
            }
        }
        else
        {
            printf("%c\n", format[i]);
            count++;

        }
    }

    va_end(list);
    return count;
}