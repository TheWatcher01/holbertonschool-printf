#include "main.h"

/**
 * print_adress - Prints the hexadecimal representation of a memory address.
 * @va: Argument value.
 *
 * Return: Number of characters printed.
 */
int print_adress(va_list va)
{
	intptr_t addr = (intptr_t) va_arg(va, void *);
	int n_digit = 0, i = 0, r = 0;
	char buffer[100];
	char *nil = "(nil)";

	if (addr == 0)
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
 * n_u_digit - Calculates the number of digits in an unsigned integer.
 * @n: The unsigned integer.
 *
 * Return: The number of digits.
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
