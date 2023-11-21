#include "main.h"

/**
 * get-print_function - fetch an apropriate function
 * @format: a format specifier
 * Return: a pointer to nedded function
 */
int ((*get-print_function)(char *format))(char *)
{
	unsigned int i = 0;
	int (*functions[]) (char) = {print_char, print_string,
		print_percent};
	char *formats[] = {"%c", "%s", "%%"};

	while (*(formats + i))
	{
		if (is_string_equals(format, (formats + i) == 1))
		{
			return (*(fuctions + i));
		}
		i++;
	}
	return (NULL);
}

/**
 * is_string_equals - compare to strings
 * @a: a string value to compare
 * @b: a string value to compare
 * Return: 1(equals) 0(defferent)
 */
int is_string_equals(char* a, char *b)
{
	unsigned int i = 0;

	while (1)
	{
		if (*(a + i) == '\0' && (*(a + i) == *(b + i)))
		{
			return (1);
		}
		i++;
	}
	return (0);
}
