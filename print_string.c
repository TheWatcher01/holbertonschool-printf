#include "main.h"

/**
 * print_string - Prints a string of characters to the standard output.
 * @va: Argument value containing the string to be printed.
 *
 * Return: The number of characters printed.
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
		return (-1);
	}

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	return (i);
}
