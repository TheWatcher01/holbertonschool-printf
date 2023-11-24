#include "main.h"

/**
 * print_int - print an int value
 * @va: an argument
 * Return: an integer value;
 */
int print_int(va_list va)
{
	int n = va_arg(va, int);
	int n_digit = n_int_digit(n);
	int i = 0;
	int value = 0;

	while (i < n_digit)
	{
		value = ((n - (value * (10 * (n_digit - i - 1)))) % (10 * (n_digit - i - 1)));
		_putchar('0' + value);
		i++;
	}
	return (n_digit);
}

/**
 * print_u - print an unsigned int
 * @va: an argument
 * Return: an integer
 */
int print_u(va_list va)
{
	unsigned int n = va_arg(va, unsigned int);
	int n_digit = n_u_digit(n), i = 0, value = 0;

	while (i < n_digit)
        {
                value = ((n - (value * (10 * (n_digit - i - 1)))) % (10 * (n_digit - i - 1)));
                _putchar('0' + value);
                i++;
        }
        return (n_digit);
}

/**
 * n_int_digit - number of digits
 * @n: the number
 * Return: an integer value
 */
int n_int_digit(int n)
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
