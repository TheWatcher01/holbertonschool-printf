#include "main.h"

/**
 * print_adress - function to
 * print hexadecimal value
 * @va: argumant value
 * Return: integer
 */
int print_adress(va_list va)
{
	intptr_t addr = (intptr_t) va_arg(va, void *);
	int n_digit = 0, i = 0, r = 0;
	char buffer[100];

	while (i < 98)
	{
		r = addr % 16;
		if (r < 10)
			buffer[i] = '0' + r;
		else
			buffer[i] = 'a' + (r - 10);

		addr /= 16;
		if (addr == 0)
		{
			i++;
			buffer[i] = 'x';
			i++;
			buffer[i] = '0';
			i++;
			break;
		}
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
