#include "main.h"

/**
 * _printf - Function that produces output according to a format.
 * @char:
 * @format: The format string that specifies how to interpret the arguments.
 * @...: A variable number of arguments to be formatted and printed.
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
	int len = 0;
	int i;
	va_list arguments;
	va_start(arguments, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;

			for (i = 0; i < sizeof(conversion) / sizeof(conversion[0]); i++)
			{
				if (*format == conversion[i])
				{
					len += conversion[i] (va_arg(arguments, int));
					break;
				}
			}
		}

		else
		{
			len += _putchar(*format);
		}
		format++;
	}
	va_end(arguments);

	return (len);

}
