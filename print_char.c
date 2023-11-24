#include "main.h"

/**
 * print_char - Outputs a single character to the console.
 *
 * @va: A variable argument list containing the character to print.
 *
 * Return: 1 (number of characters printed).
 */

int print_char(va_list va)
{
	_putchar((char) va_arg(va, int));
	return (1);
}
