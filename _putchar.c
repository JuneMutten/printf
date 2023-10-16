#include<unistd.h>
	/**
	 * _putchar- writes the characters C to stdout
	 * @c: character to print
	 *
	 * Return: on success 1
	 * On error, -1 is returned, & error is setup appropriately
	 */
int _putchar( char c)
	{
		return (write (1,&c,1));

	}
