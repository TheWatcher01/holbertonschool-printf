#include "main.h"

/**
 * print_string - Function that prints a single character
 * (string format specifier) to the standard output streams.
 *
 * @va: The character to print. (string format specifier)
 *
 * Return: How many characters printed.
 */

int print_string(va_list va)
{
	int i = 0;
	char *str = va_arg(va, char *);

	if (str == NULL)
	{
		str = "(null)";
		while (*str)
		{
			_putchar(*str);
			str++;
		}
	}

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	return (i);
}
