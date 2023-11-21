#include <main.h>

/**
 * print_string - Function that prints a single character
 * (string format specifier) to the standard output streams.
 *
 * @s: The character to print. (string format specifier)
 *
 * Return: How many characters printed.
 */

int print_string(char *s)
{
	unsigned int i = 0;
	while (*(s + i))
	{
		_putchar(*(s + i));
		i++;
	}
	return (i);
}
