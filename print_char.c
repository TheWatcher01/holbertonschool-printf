#include "main.h"

/**
 * print_char - Function that prints a single character
 * (character format specifier) to the standard output streams.
 * @c: The character to print. (character format specifier)
 * Return: 1
 */
int print_char(char *c)
{
	if (c == NULL)
		return (0);

	_putchar(*c);
	return (1);
}

