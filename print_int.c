#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_int - Function that prints an integer
 * @list: List of arguments
 * 
 * Return: Number of characters printed
*/

int print_int(va_list list)

{
 int printed_chars = 0;
 int n = va_arg(list, int);

 printed_chars = n;
 
 printf("%d\n", n);

 return printed_chars;   
}