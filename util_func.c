#include "main.h"

/**
 * is_string_equals - check if two string are identicals
 * @a: string value
 * @b: string value
 * Return: 1(true) 0(false)
 */
int is_string_equals(char *a, char *b)
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

int _length(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		i++;
	}
	return (i);
}
