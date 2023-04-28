#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_int(va_list list);
int print_binary(va_list list, char buffer[], int flags, int width
	int precision, int length);
int print_decimal(va_list list, char buffer[]);
int print_octal(va_list list, char buffer[]);
int print_hexadecimal(va_list list, char buffer[]);
int print_hexadecimal_lower(va_list list, char buffer[]);
int print_hexadecimal_upper(va_list list, char buffer[]);
int print_string(va_list list);
int print_pointer(va_list list, char buffer[]);
int print_reverse(va_list list, char buffer[]);
int print_rot13string(va_list list, char buffer[]);
int find_flag(const char *format, int *i);
int find_length(const char *format, int *i);
int find_precision(const char *format, int *i, va_list list);
int find_width(const char *format, int *i, va_list list);

#endif
