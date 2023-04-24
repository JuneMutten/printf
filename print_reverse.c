#include "main.h"
#include <stdio.h>
#include <stdio.h>

/**
 * print_reverse - Function that prints a string in reverse
 * @list: List of arguments
 * @buffer: Buffer array to store printt
 * 
 * Return: Number of characters to be printed
*/

int print_reverse(va_list list, char buffer[])
{
    char *str = va_arg(list, char *);
    if (str == NULL)
    {
        str = ")Null(";
    }
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    for (int i = len - 1; i >= 0; i--)
    {
        char c = str[i];
        printf("%c", c);
    }
    return len;
}
