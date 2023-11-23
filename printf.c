#include "main.h"

int _printf(char *format, ...)
{
	int i = 0;
	char *format_specifier;
	int (*function)(void *);
	va_list values;
	void *arg;

	va_start(values, format);

	if (format == NULL)
		return (0);

	while (*(format + i))
	{
		if (*(format + i) == '%')
		{
			format_specifier = get_format(format + i);
			if (format_specifier != NULL)
			{
				function = get_print_function(format_specifier);
				if (function != NULL)
				{
					function(va_arg(values, void *));
					i += _length(format_specifier);
				}
			}
		}
		print_char(format + i);
		i++;
	}

	va_end(values);
	return (0);
}

char *get_format(char *str)
{
	int len = 0, key = -1, i = 0;
	char *copy;
	char *formats[] = {"c", "d", "E", "e", "f", "G", "g", "i", "ld", "li", "lf", "Lf", "lu", "lld", "lli", "llu", "o", "p", "u", "s", "x", "X", "n", "%", NULL};

	if (str == NULL)
		return (NULL);

	while (*(formats + i) != NULL)
	{
		if (is_string_equals((str + 1), *(formats + i)) == 1)
		{
			key = i;
		}
		i++;
	}

	if (key == -1)
		return (NULL);

	while (*(*(formats + key) + len))
	{
		len++;
	}

	copy = malloc(sizeof(char) * (len + 2));
	if (copy == NULL)
		return (NULL);
	i = 0;
	*(copy + 0) = '%';
	i++;
	while (i < (len + 1))
	{
		*(copy + i) = *(*(formats + (key)) + (i - 1));
		i++;
	}
	*(copy + i) = '\0';
	return (copy);
}
