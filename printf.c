#include "main.h"
#include <stdio.h>

/**
 * _printf - equivalent of printf in standard
 * @format: format
 * Return: number of char printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	char *format_specifier;
	int (*function)(va_list);
	va_list values;
	int result = 0;

	va_start(values, format);
	if (format == NULL)
		return (0);
	while (*(format + i))
	{
		if (*(format + i) != '%')
		{
			_putchar(*(format + i));
			result++;
		}

		if (*(format + i) == '%')
		{
			format_specifier = get_format(format + i);
			if (format_specifier != NULL)
			{
				function = get_print_function(format_specifier);
				if (function != NULL)
				{
					if (is_string_equals(format_specifier, "%%") == 1)
					{
						result += function(NULL);
					}
					else
					{
						printf("YOOOO");
						result += function(values);
					}
					i += (_length(format_specifier) - 1);
				}
			}
		}
		i++;
	}
	va_end(values);
	return (result);
}

/**
 * get_format - get the format specifier
 * @str: buffer that contains the format specifier
 * Return: the string that contains the format
 */
char *get_format(const char *str)
{
	int key = -1, i = 0;
	char *formats[] = {"%c", "%d", "%E", "%e", "%f", "%G", "%g", "%i",
		"%ld", "%li", "%lf", "%Lf", "%lu", "%lld", "%lli", "%llu",
		"%o", "%p", "%u", "%s", "%x", "%X", "%n", "%%", NULL};

	if (str == NULL)
		return (NULL);

	while (*(formats + i) != NULL)
	{
		if (is_string_equals(str, *(formats + i)) == 1)
		{
			key = i;
		}
		i++;
	}

	if (key == -1)
		return (NULL);

	return (*(formats + key));
}
