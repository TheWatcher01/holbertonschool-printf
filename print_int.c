#include "main.h"

/**
 * print_int - print an int value
 * @va: an argument
 * Return: an integer value;
 */
int print_int(va_list va)
{
	int n = va_arg(va, int);
	int n_digit = 0;
	char buffer[12];
	int i = 0;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	n_digit = n_u_digit((unsigned int) n);

	while (i < 12)
	{
		buffer[i] = ('0' + (n % 10));
		n /= 10;
		i++;
	}

	i -= 1;
	while (i >= 0)
	{
		if (*(buffer + i) != '0')
		{
			while (i >= 0)
			{
				_putchar(*(buffer + i));
				i--;
			}
		}
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
	int n_digit = n_u_digit(n);
	int i = 0;
	char buffer[12];

	while (i < 12)
	{
		buffer[i] = ('0' + (n % 10));
		n /= 10;
		i++;
	}

	i -= 1;
	while (i >= 0)
	{
		if (*(buffer + i) != '0')
		{
			while (i >= 0)
			{
				_putchar(*(buffer + i));
				i--;
			}
		}
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
	int n_digit = 0;
	int i = 0;
	char buffer[100];

	while (i < 100)
	{
		buffer[i] = ('0' + (n % 8));
		n /= 8;
		i++;
	}

	i -= 1;
	while (i >= 0)
	{
		if (*(buffer + i) != '0')
		{
			while (i >= 0)
			{
				n_digit++;
				_putchar(*(buffer + i));
				i--;
			}
		}
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
	int n_digit = 0;
	int i = 0;
	int r = 0;
	char buffer[100];

	while (i < 100)
	{
		r = n % 16;
		if (r < 10)
			buffer[i] = '0' + r;
		else
			buffer[i] = 'a' + (r - 10);

		n /= 16;
		i++;
	}

	i -= 1;
	while (i >= 0)
	{
		if (*(buffer + i) != '0')
		{
			while (i >= 0)
			{
				n_digit++;
				_putchar(*(buffer + i));
				i--;
			}
		}
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
	int n_digit = 0;
	int i = 0;
	int r = 0;
	char buffer[100];

	while (i < 100)
	{
		r = n % 16;
		if (r < 10)
			buffer[i] = '0' + r;
		else
			buffer[i] = 'A' + (r - 10);

		n /= 16;
		i++;
	}

	i -= 1;
	while (i >= 0)
	{
		if (*(buffer + i) != '0')
		{
			while (i >= 0)
			{
				n_digit++;
				_putchar(*(buffer + i));
				i--;
			}
		}
		i--;
	}

	return (n_digit);
}
