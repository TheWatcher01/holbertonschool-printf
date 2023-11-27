#include "main.h"

/**
 * find_format_function - Retrieves the pointer to the appropriate print
 * function based on the specified format character.
 *
 * @formatCharacter: The format character indicating the type of data to print.
 *
 * Return: A pointer to the corresponding print function, or NULL if no
 * matching function is found.
 */

int (*find_format_function(char formatCharacter))(va_list)
{
	/** Iterate through the format descriptors until a match is found*/
	int i = 0;

	/** Define an array of format descriptors*/
	FormatSpecifierAndDisplayFunction formatDescriptors[] = {
		{'c', print_character}, {'s', print_string},
		{'%', print_percent}, {'d', print_int},
		{'i', print_int}, {'b', print_unsigned_bin},
		{'u', print_unsigned_int},
		{'o', print_unsigned_octal},
		{'x', print_unsigned_hexadecimal},
		{'X', print_unsigned_Hexadecimal},
		{'p', print_address},
		{'\0', NULL}
	};

	while (formatDescriptors[i].format_type != formatCharacter &&
			formatDescriptors[i].format_type != '\0') {
		i++;
	}

	/** Retrieve the corresponding print function, or NULL if no match is found*/
	return (formatDescriptors[i].displayFunctionPointer);
}

