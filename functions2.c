#include "main.h"

/**
 * convert_to_Hex - Converts a number to hexadecimal
 * @num: Number to be converted
 * Return: Number of characters printed
*/

int convert_to_Hex(unsigned int num)
{
        int i, digit, count = 0;
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
