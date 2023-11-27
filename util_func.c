#include "main.h"

/**
 * is_string_equals - check if two string are identicals
 * @a: string value
 * @b: string value
 * Return: 1(true) 0(false)
 */
int is_string_equals(const char *a, const char *b)
{
	unsigned int i = 0;

	if (a == NULL || b == NULL)
		return (1);

	while (*(a + i) == *(b + i))
	{
		i++;
		if (*(a + i) == '\0')
			return (1);
	}
	return (0);
}

/**
 * _length - compute the length of @str
 * @str: a string value
 * Return: length of @str
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
