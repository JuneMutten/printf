By Victor and June

Printf Group project in teams of 2

Requirements

Allowed editors: vi, vim, emacs
All the files are compiled on Ubuntu 20.04 LTS using the options -Wall -Werror -Wextra -pedantic -std=gnu89 and shoul run on a new line
The codes use Betty style
We are not allowed to use global variables and there shouldn't be more than 5 functions per file.
The prototypes of all the functions are to be included in our header file called main.h and the header files should include guarded
GitHub

There's only one project repository per group (printf)
Authorized functions and macros

write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)
Compilation

Your code will be compiled this way: $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
Tasks (Mandatory) 0. Write a function that produces output according to a format. Prototype: int _printf(const char *format, ...); Returns: the number of characters printed (excluding the null byte used to end output to strings) write output to stdout, the standard output stream format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers: c s % You don’t have to reproduce the buffer handling of the C library printf function You don’t have to handle the flag characters You don’t have to handle field width You don’t have to handle precision You don’t have to handle the length modifiers

Handle the following conversion specifiers: d i You don’t have to handle the flag characters You don’t have to handle field width You don’t have to handle precision You don’t have to handle the length modifiers
Tasks (Advanced) 2. Handle the following custom conversion specifiers: b: the unsigned int argument is converted to binary

Handle the following conversion specifiers: u o x X You don’t have to handle the flag characters You don’t have to handle field width You don’t have to handle precision You don’t have to handle the length modifiers

Use a local buffer of 1024 chars in order to call write as little as possible.

Handle the following custom conversion specifier: S : prints the string. Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

Handle the following conversion specifier: p. You don’t have to handle the flag characters You don’t have to handle field width You don’t have to handle precision You don’t have to handle the length modifiers

Handle the following flag characters for non-custom conversion specifiers: + space

Handle the following length modifiers for non-custom conversion specifiers: l h Conversion specifiers to handle: d, i, u, o, x, X

Handle the field width for non-custom conversion specifiers.

Handle the precision for non-custom conversion specifiers.

Handle the 0 flag character for non-custom conversion specifiers.

Handle the - flag character for non-custom conversion specifiers.

Handle the following custom conversion specifier: r : prints the reversed string

Handle the following custom conversion specifier: R: prints the rot13'ed string

All the above options work well together.