#include "main.h"
/**
 * _printf - Prints formatted output to the standard output
 * @format: The format string containing format specifiers.
 * Return: The number of characters printed or -1 if the format string is NULL
 */
int _printf(const char *format, ...)
{
	va_list argumentList;
	int i = 0, characterCount = 0;
	int (*formatFunctionPointer)(va_list) = NULL;

	va_start(argumentList, format);
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			i++;
			characterCount++;
			continue;
		}
		i++;
		formatFunctionPointer = find_format_function(format[i]);
		if (formatFunctionPointer != NULL)
			characterCount += formatFunctionPointer(argumentList);
		else
		{
			if (format[i] == '\0')
				return (-1);
			if (format[i] == '%')
				_putchar('%');
			else
			{
				_putchar('%');
				_putchar(format[i]);
				characterCount++;
			}
			characterCount++;
		}
		i++;
	}
	va_end(argumentList);
	return (characterCount);
}
