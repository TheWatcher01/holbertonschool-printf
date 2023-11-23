#include "main.h"

int (*get_print_function(char *format))(void *)
{
	int i = 0;
	int (*func[])(void *) = {print_char, print_string, print_percent};
	char *formats[] = {"c", "s", "%"};

	while (i < 3)
	{
		if (is_string_equals(*(formats + i), (format + 1)) == 1)
		{
			return (*(func + i));
		}	
		i++;
	}
	return (NULL);
}
