#include "main.h"

/**
 * print_percent - Prints a literal '%' character to the standard output.
 *
 * @args: The argument list (unused in this function).
 *
 * Return: 1, indicating that only one character was printed.
 */

int print_percent(va_list args)
{
	/** Ignore the unused argument list*/
	(void) args;

	/** Write the '%' character to the standard output*/
	_putchar('%');

	/** Return 1 to indicate that only one character was printed*/
	return (1);
}
