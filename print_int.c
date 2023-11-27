#include "main.h"

/**
 * print_int - print an int value
 * @va: an argument
 * Return: an integer value;
 */
int print_int(va_list va)
{
	int n = va_arg(va, int), n_digit = 0, i = 0;
	char buffer[1024];

	if (n < 0)
	{
		n_digit++;
		_putchar('-');
		n = -n;
	}
	while (i < 1024)
	{
		if (n > 0)
			buffer[i] = ('0' + (n % 10));
		else
			buffer[i] = ('0' - (n % 10));

		n /= 10;
		if (n == 0)
			break;
		i++;
	}
	while (i >= 0)
	{
		_putchar(*(buffer + i));
		n_digit++;
		i--;
	}

	return (n_digit);
}

/**
 * print_unsigned_int - print an unsigned int
 * @va: an argument
 * Return: an integer
 */
int print_unsigned_int(va_list va)
{
	unsigned int n = va_arg(va, unsigned int);
	int n_digit = n_u_digit(n), i = 0;
	char buffer[1024];

	while (i < 1024)
	{
		buffer[i] = ('0' + (n % 10));
		n /= 10;
		if (n == 0)
			break;
		i++;
	}

	while (i >= 0)
	{
		_putchar(*(buffer + i));
		n_digit++;
		i--;
	}
	return (n_digit);
}

/**
 * print_unsigned_octal - print octal value
 * @va: argument value
 * Return: number of digits;
 */
int print_unsigned_octal(va_list va)
{
	unsigned int n = va_arg(va, unsigned int);
	int n_digit = 0, i = 0;
	char buffer[1024];

	while (i < 1024)
	{
		buffer[i] = ('0' + (n % 8));
		n /= 8;
		if (n == 0)
			break;
		i++;
	}

	while (i >= 0)
	{
		_putchar(*(buffer + i));
		n_digit++;
		i--;
	}
	return (n_digit);
}

/**
 * print_unsigned_hexadecimal - function to
 * print hexadecimal value
 * @va: argumant value
 * Return: integer
 */
int print_unsigned_hexadecimal(va_list va)
{
	unsigned int n = va_arg(va, unsigned int);
	int n_digit = 0, i = 0, r = 0;
	char buffer[1024];

	while (i < 1024)
	{
		r = n % 16;
		if (r < 10)
			buffer[i] = '0' + r;
		else
			buffer[i] = 'a' + (r - 10);

		n /= 16;
		if (n == 0)
			break;
		i++;
	}

	while (i >= 0)
	{
		_putchar(*(buffer + i));
		n_digit++;
		i--;
	}
	return (n_digit);
}

/**
 * print_unsigned_Hexadecimal - function to
 * print hexadecimal value
 * @va: argumant value
 * Return: integer
 */
int print_unsigned_Hexadecimal(va_list va)
{
	unsigned int n = va_arg(va, unsigned int);
	int n_digit = 0, i = 0, r = 0;
	char buffer[1024];

	while (i < 100)
	{
		r = n % 16;
		if (r < 10)
			buffer[i] = '0' + r;
		else
			buffer[i] = 'A' + (r - 10);

		n /= 16;
		if (n == 0)
			break;
		i++;
	}

	while (i >= 0)
	{
		_putchar(*(buffer + i));
		n_digit++;
		i--;
	}
	return (n_digit);
}
