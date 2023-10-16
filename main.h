#ifndef MAIN_H
#define MAIN_H

/**
 * struct format - Matches the conversion specifiers used with printf
 * @id: The conversion specifier
 * @f: Pointer to the function that matches specifier
*/

typedef struct format
{
	char *id;
	int (*f)()
} convert_if_match;

int _printf(const char *format, ...);
int _putchhar(char c);
int print_char(va_list parameters);
int print_string(va_list parameters);
int print_percent(void);

#endif
