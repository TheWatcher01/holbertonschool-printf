#include "main.h"

/**
 * print_character - Prints a single character to the standard output.
 *
 * @character: The character to be printed.
 *
 * Return: 1, indicating that only one character was printed.
 */

int print_character(va_list args)
{
	/** Read the character to be printed from the argument list*/
	char character = (char) va_arg(args, int);

	/** Print the character to the standard output*/
	_putchar(character);

	/** Return 1 to indicate that only one character was printed*/
	return (1);
}
