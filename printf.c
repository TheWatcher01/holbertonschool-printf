#include "main.h"

int call(char const *format, int i, char *format_specifier,
		int (*function)(va_list), int result, va_list va);
/**
 * _printf - equivalent of printf in standard
 * @format: format
 * Return: number of char printed
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
 * call - function to break _print
 * @format: format string
 * @format_specifier: string value
 * @function: function
 * @values: va_list
 * @result: int
 * @i: integer
 * Return: integer
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
