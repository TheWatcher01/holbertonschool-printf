#include "main.h"

/**
 * print_percent - function that handle the %% specifier
 * @c: a char to print
 * Return: 1 (Always)
 */
int print_percent(char *c)
{
	if (c == NULL)
		return (0);

	_putchar(*c);
	return (1);
}
