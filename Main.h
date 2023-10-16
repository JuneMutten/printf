#ifndef MAIN.H
#define MAIN.H

#include<stdio.h>
#include<stdarg.h>
#include<string.h>

int _putchar (char c);
int _printf( const char *format,...);
int print_f string(int *pos, const char *format, va_list ap);
int print_string (va_list ap);
int print_char (va_list ap);
int print_percent (va_list ap);
int print_int (va_list a p);
int print_unsigned_int (va_list ap);
int print_octal_number (va_list ap);
int print_hexadecimal (va_list ap);
int print_hexadecimal (va_list ap);
int print_hexadecimal_cap (va_list ap);
int print_hexadecimal_all (va_list ap, char c);

	/**
	 * Struct conv_spec- SAtruct op
	 *
	 * @spec:The specifier
	 * @func: The function associated with the specifier
	 */
Struct conv_spec
	{
		Char spec;
		int(*func)(va_list);
	};
	/**
	 * typedef struct conv_spec_to -struct op
	 *
	 * @conv_spec:Struct
	 * @conv_spec_t: Name associated to struct
	 */
typedef struct conv_spec conv_spec_t;
#endif/*MAIN.H*/

