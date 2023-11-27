#include "main.h"

int call(va_list va, char *buffer, char *nil, int n_digit,
		int i, int r);
/**
 * print_address - function to
 * print hexadecimal value
 * @va: argumant value
 * Return: integer
 */
int print_address(va_list va)
{
	intptr_t addr = (intptr_t) va_arg(va, void *);
	int n_digit = 0, i = 0, r = 0;
	char buffer[100];
	char *nil = "(nil)";

	if (!addr)
	{
		while (*(nil + i))
		{
			_putchar(*(nil + i));
			i++;
		}
		return (i);
	}
	while (1)
	{
		r = addr % 16;
		if (r < 10)
			buffer[i] = '0' + r;
		else
			buffer[i] = 'a' + (r - 10);
		addr /= 16;
		if (addr == 0)
			break;
		i++;
	}
	_putchar('0');
	_putchar('x');
	n_digit += 2;
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
 * print_unsigned_bin - print unsigned int in binary
 * @va: arguments
 * @Return: number characters printed
 */
int print_unsigned_bin(va_list va)
{
	char buffer[1024];
	unsigned int n = va_arg(va, unsigned int);
	int n_digit = 0, i = 0;

	while (i < 1024)
	{
		buffer[i] = '0' + (n % 2);
		n -= (n % 2);
		n /= 2;
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
 * n_u_digit - number of digits inside
 * @n: number
 * Return: an integer value
 */
int n_u_digit(unsigned int n)
{
	int i = 0;

	if (n == 0)
		return (1);

	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
