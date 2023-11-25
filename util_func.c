#include "main.h"

/**
 * is_string_equals - Function checks whether two strings are identical.
 *
 * @a: The first string.
 * @b: The second string.
 *
 * Return: 1 if the strings are identical, 0 otherwise.
 */

int is_string_equals(const char *a, const char *b)
{
	unsigned int i = 0;

	if (a == NULL || b == NULL)
		return (1);

	while (*(a + i) && *(b + i))
	{
		if (*(a + i) != *(b + i))
			return (0);
		i++;
	}
	return (1);
}

/**
 * _length - Computes the length of a string.
 *
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _length(const char *str)
{
	int i = 0;

	while (*(str + i))
	{
		i++;
	}
	return (i);
}
