#include "main.h"

int call(char const *format, int i, char *format_specifier,
		int (*function)(va_list), int result, va_list va);

/**
 * _printf - Custom implementation of the standard `printf` function
 * @format: Format string to be parsed and applied to the supplied arguments
 *
 * This function emulates the functionality of the standard `printf` function,
 * allowing for formatted output to the console. It takes a format string as input
 * along with a variable number of arguments and produces a string that corresponds
 * to the format specifiers and given input values.
 *
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	char *format_specifier = NULL;
	int (*function)(va_list) = NULL;
	va_list values;
	int result = 0;

	va_start(values, format);
	result = call(format, i, format_specifier, function, result, values);
	va_end(values);
	return (result);
}

/**
 * call - Recursive function to process the format string and apply format specifiers
 * @format: Format string to be parsed
 * @i: Current index within the format string
 * @format_specifier: Pointer to the identified format specifier string
 * @function: Pointer to the corresponding print function associated with the format specifier
 * @values: Variable argument list containing the values to be formatted
 * @result: Accumulated count of characters printed
 *
 * This recursive function traverses the format string, identifying format specifiers
 * and invoking the corresponding print function to handle the associated argument.
 * It tracks the index within the format string and the accumulated count of
 * characters printed.
 *
 * Return: Updated count of characters printed
 */

int call(char const *format, int i, char *format_specifier,
		int (*function)(va_list), int result, va_list values)
{
	if (format == NULL)
		return (-1);
	while (*(format + i))
	{
		if (*(format + i) != '%')
		{
			_putchar(*(format + i));
			result++;
		}
		if (*(format + i) == '%' && *(format + i + 1) == '\0')
		{
			return (-1);
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
						result += function(values);
					}
					i += (_length(format_specifier) - 1);
				}
				else
				{
					_putchar('%');
					return (-1);
				}
			}
			else
			{
				return (-1);
			}
		}
		i++;
	}
	return (result);
}

/**
 * get_format - Identifies the format specifier string from the format string
 * @str: Pointer to the substring containing the potential format specifier
 *
 * This function searches for a matching format specifier string among a predefined
 * set of supported format specifiers. It compares the substring starting at the
 * provided pointer to the known format specifiers and returns the corresponding
 * string if a match is found.
 *
 * Return: Pointer to the matching format specifier string, or NULL if no match found
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

	return (*(formats + key))}
