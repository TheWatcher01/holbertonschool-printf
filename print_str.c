#include "main.h"

/**
 * print_string - Prints a null-terminated string to the standard output.
 *
 * @args: The argument list containing the string to print.
 *
 * Return: The length of the printed string.
 */

int print_string(va_list args)
{
	/** Extract the string to print from the argument list*/
	char *string = va_arg(args, char *);

	/** Initialize a counter to track the number of characters printed*/
	int counter = 0;

	/** Handle the case when the string pointer is NULL*/
	if (string == NULL)
	{
		string = "(null)";
	}

	/** Iterate through the string until the null terminator is encountered*/
	while (*string != '\0')
	{
		_putchar(*string);
		string++;
		counter++;
	}

	/** Return the total length of the printed string*/
	return (counter);
}

#include "main.h"

/**
 * print_String - Prints a null-terminated string to the standard output.
 * with special print for non printable char.
 * @va: The argument list containing the string to print.
 *
 * Return: The length of the printed string.
 */
int print_String(va_list va)
{
	char *string = va_arg(va, char *);
	int counter = 0;

	if (string == NULL)
	{
		string = "(null)";
	}

	while (*string != '\0')
	{
		if (*string < 32 || *string >= 127)
		{
			_putchar('\\');
			_putchar('x');
			_putchar('0');
			counter += 2;
			counter += _printf("%X", *string);
		}
		else
		{
			_putchar(*string);
		}
		string++;
		counter++;
	}

	return (counter);
}
