#include "main.h"

/**
 */
int print_char(void *c)
{
	if (c == NULL)
		return (0);

	_putchar(*((char *) c));
	return (0);
}
