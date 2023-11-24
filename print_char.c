#include "main.h"

/**
 * print_char - prints a character
 * @va: argument that gives a char
 * Return: 1
 */
int print_char(va_list va)
{
	_putchar((char) va_arg(va, int));
	return (1);
}
