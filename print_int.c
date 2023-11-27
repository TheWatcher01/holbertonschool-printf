#include "main.h"
/**
 * print_integer - Prints an integer value to the standard output.
 * @args: The integer value to be printed.
 * Return: The length of the printed integer representation.
 */
int print_integer(va_list args)
{
	int integerValue = va_arg(args, int);
	unsigned int absoluteValue = integerValue;
	unsigned int currentDigit = absoluteValue;
	unsigned int  counter = 0, digitCount = 1;

	if (integerValue < 0)
	{
		_putchar('-');
		integerValue *= -1;
	}
	while (currentDigit > 9)
	{
		currentDigit /= 10;
		digitCount *= 10;
	}
	while (digitCount >= 1)
	{
		counter += _putchar(((absoluteValue / digitCount) % 10) + '0');
		digitCount /= 10;
	}
	return (counter);
}
