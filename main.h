#ifndef our_printf
#define our_printf
#include <stdio.h>
#include <stdarg.h>
/**
 * struct specifier - struct specifier
 * @valid: the valid character.
 * @f: the functions associated.
 *
 */
typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
} spec;
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int print_p(va_list args);
int print_R(va_list args);
int print_r(va_list args);
int print_S(va_list args);
int print_X(va_list args);
int print_x(va_list args);
int print_o(va_list args);
int print_u(va_list args);
int _putchar(char c);
int convert_to_Hex(unsigned int num);
int convert_to_hex(unsigned long int num);
int print_percent(va_list args);
int (*get_func(char x))(va_list args);
#endif
