#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_pointer - Prints pointer in hexadecimal format
 * @args: Arguments
 * Return:Number of characters to be printed
*/

int print_binary(va_list args)
{
    void *ptr;
    char *str = "nil"
    long unsigned int a;
    int b, i;

    ptr = va_arg(args, void *);

    if (p = NULL)
    {
        for (i = 0; str[i] != '/0'; i++)
        {
            _putchar(str[i]);
        }
        return(i)
    }

    a = (unsigned long int)p;
    _putchar('0');
    _putchar('x');
    b = convert_to_hex(a);

    return (b+2);
}

/**
 * convert_to_hex - Converts a number to hexadecimal
 * @num: Number to be converted
 * Return: Number of characters printed
*/

int convert_to_hex(unsigned long int num)
{
    int i, j, count = 0;
    char hex_digits[] = "0123456789ABCDEF";
    char hex_buffer[16];

    if (num == 0)
    {
        _putchar('0');
        return (1);
    }
    while (num > 0)
    {
        digit = num % 16;
        hex_buffer[count] = hex_digit[digit];
        num /= 16;
        count++;
    }
    for (i = (count - 1); i > 0; i--)
    {
        _putchar(hex_buffer[i]);
    }
    return (count);

}
int print_rot13(va_list args)
{
    int i, j, count = 0;
    char *str = va_arg(args, char *);
    char key_1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char key_2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZ";

    if (str == NULL)
    {
        str = "null";
    }

    for (i = 0; s[i]; i++)
    {
        for (j = 0; key_1[j]; j++)
        {
            if (s[i] == alpha[j])
            {
                _putchar(key_2[j]); 
                count++;
                break;
            }
        }

        if (!alpha[j])
        {
            _putchar(s[i]);
            count++;
        }
    }

    return (count);
}
