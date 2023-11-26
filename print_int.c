#include "main.h"

/**
 * print_integer - Prints an integer value to the standard output.
 *
 * @integerValue: The integer value to be printed.
 *
 * Return: The length of the printed integer representation.
 */

int print_integer(va_list args)
{
	/** Read the integer value to be printed from the argument list*/
	int integerValue = va_arg(args, int);

	/** Initialize variables for handling digits and counting*/
	unsigned int absoluteValue = integerValue, currentDigit = absoluteValue, counter = 0, digitCount = 1;

	/** Handle negative integers by printing a leading '-' sign*/
	if (integerValue < 0) 
	{
		_putchar('-');
		integerValue *= -1; /** Convert negative value to positive for processing*/
	}

	/** Determine the number of digits required to represent the absolute value*/
	while (currentDigit > 9) 
	{
		currentDigit /= 10;
		digitCount *= 10;
	}

	/** Print each digit of the absolute value in reverse order*/
	while (digitCount >= 1) 
	{
		counter += _putchar(((absoluteValue / digitCount) % 10) + '0');
		digitCount /= 10;
	}

	/** Return the total length of the printed integer representation*/
	return (counter);
}
