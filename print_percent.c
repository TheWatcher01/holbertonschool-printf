#include "main.h"

/**
 * print_percent - function that handle the %% specifier
 * @va: is always NULL
 * Return: 1 (Always)
 */
int print_percent(va_list __attribute__((unused)) va)
{
	_putchar('%');
	return (1);
}
