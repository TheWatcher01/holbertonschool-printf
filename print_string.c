#include "main.h"

/**
 * print_string - Function that prints a single character
 * (string format specifier) to the standard output streams.
 *
 * @s: The character to print. (string format specifier)
 *
 * Return: How many characters printed.
 */

int print_string(void *s)
{
	char *str = (char *) s;
	unsigned int i = 0;

	if (s == NULL)
		return (i);

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	return (i);
}
