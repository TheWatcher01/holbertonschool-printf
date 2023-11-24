#include "main.h"

/**
 * get_print_function - return a function that print values
 * @format: a string value that contains a format specifier
 * Return: a function used to print @format values
 */
int (*get_print_function(char *format))(va_list)
{
	int i = 0;
	int (*func[])(va_list) = {print_char, print_string,
		print_percent, print_int, print_u, NULL};
	char *formats[] = {"%c", "%s", "%%", "%d", "%i"};

	while (*(func + i) != NULL)
	{
		if (is_string_equals(*(formats + i), format) == 1)
		{
			return (*(func + i));
		}
		i++;
	}
	return (NULL);
}
