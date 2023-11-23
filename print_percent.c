#include "main.h"

/**
 * print_percent - function that handle the %% specifier
 * @c: a char to print
 * Return: 1 (Always)
 */
int print_percent(__attribute__((unused)) void *c )
{
	if (c == NULL)
		return (0);

	_putchar('%');
	return (1);
}
