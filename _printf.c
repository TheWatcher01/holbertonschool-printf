#include "main.h"

/**
 * print_formatted_output - Prints formatted output to the standard output
 * based on the specified format string and arguments.
 *
 * @format: The format string containing format specifiers.
 * @...: The variable arguments to be printed according to the format specifiers.
 *
 * Return: The number of characters printed, or -1 if the format string is NULL.
 */

int _printf(const char *format, ...)
{
	/** Initialize a variable list to store the variable arguments*/
	va_list argumentList;
	int i = 0; /** Index for scan format specifiers*/
	int characterCount = 0; /** Counter for characters printed*/
	int (*formatFunctionPointer)(va_list) = NULL;

	/** Start the variable argument list traversal*/
	va_start(argumentList, format);

	/** Check if the format string is NULL*/
	if (format == NULL) 
	{
		return (-1);
	}

	/** Iterate through the format string*/
	while (format[i]) 
	{
		/** Handle non-format characters*/
		if (format[i] != '%') 
		{
			_putchar(format[i]);
			i++;
			characterCount++;
			continue;
		}

		/** Advance past the '%' character*/
		i++;

		/** Retrieve the format specifier function for the current character*/
		formatFunctionPointer = find_format_function(format[i]);

		/** Handle valid format specifiers*/
		if (formatFunctionPointer != NULL) 
		{
			characterCount += formatFunctionPointer(argumentList);
		}
		/** Handle invalid format specifiers or the end of the format string*/
		else 
		{
			if (format[i] == '\0') 
			{
				return (-1);
			}

			if (format[i] == '%') 
			{
				characterCount += _putchar('%');
			}
			else 
			{
				_putchar('%');
				_putchar(format[i]);
				characterCount += 2;
			}
		}

		/** Advance past the format specifier character*/
		i++;
	}

	/** End the variable argument list traversal*/
	va_end(argumentList);

	/** Return the total number of characters printed*/
	return (characterCount);
}

