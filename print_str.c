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
