#include "main.h"

/**
 * print_R - Prints ROT13
 * @args: Arguments
 * Return: Number of characters printed
*/
int print_R(va_list args)
{
        int i, j, count = 0;
        char *str = va_arg(args, char *);
        char key_1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        char key_2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZ";

        if (str == NULL)
        {
                str = "null";
        }

        for (i = 0; str[i]; i++)
        {
                for (j = 0; key_1[j]; j++)
                {
                        if (str[i] == key_1[j])
                        {
                                _putchar(key_2[j]);
                                count++;
                                break;
                        }
                }

                if (!key_1[j])
                {
                        _putchar(str[i]);
                        count++;
                }
        }

        return (count);
}

/**
 * print_p - Prints pointer in hexadecimal format
 * @args: Arguments
 * Return:Number of characters to be printed
*/

int print_p(va_list args)
{
        void *ptr;
        char *str = "nil";
        unsigned long int a;
        int b, i;

        ptr = va_arg(args, void *);

        if (ptr == NULL)
        {
                for (i = 0; str[i] != '\0'; i++)
                {
                        _putchar(str[i]);
                }
                return (i);
        }

        a = (size_t)ptr;
        _putchar('0');
        _putchar('x');
        b = convert_to_hex(a);

        return (b + 2);
}

/**
 * convert_to_hex - Converts a number to hexadecimal
 * @num: Number to be converted
 * Return: Number of characters printed
*/

int convert_to_hex(unsigned long int num)
{
        int i, digit, count = 0;
        char hex_digits[] = "0123456789abcdef";
        char hex_buffer[16];

        if (num == 0)
        {
                _putchar('0');
                return (1);
        }

        while (num > 0)
        {
                digit = num % 16;
                hex_buffer[count] = hex_digits[digit];
                num /= 16;
                count++;
        }
        for (i = count - 1; i >= 0; i--)
        {
                _putchar(hex_buffer[i]);
        }
        return (count);
}
