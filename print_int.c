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
	char buffer[5];
	int i = 0;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	n_digit = n_u_digit((unsigned int) n);

	while (i < 5)
        {
                buffer[i] = ('0' + (n % 10));
                n /= 10;
                i++;
        }

        while (i >= 0)
        {
                _putchar(*(buffer + i));
                i--;
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
	int n_digit = n_u_digit(n);
	int i = 0;
	char buffer[6];

	while (i < 5)
	{
		buffer[i] = ('0' + (n % 10));
		n /= 10;
		i++;
	}

	while (i >= 0)
	{
		_putchar(*(buffer + i));
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
