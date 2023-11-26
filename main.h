#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
/**
 * struct FormatSpecifierAndDisplayFunction - A structure map format specifier
 * to its corresponding display function.
 *
 * @format_type: The character representing the format specifier.
 * @displayFunctionPointer: A function pointer to the function that displays
 * the argument according to the format specifier.
 */
typedef struct FormatSpecifierAndDisplayFunction
{
	char format_type;
	int (*displayFunctionPointer)(va_list);
} FormatSpecifierAndDisplayFunction;

/** Prototypes des fonctions*/
int _printf(const char *format, ...);
int print_character(va_list args);
int print_integer(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int _putchar(char c);
int (*find_format_function(char formatCharacter))(va_list arguments);

#endif /** MAIN_H*/

