#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
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
/** int print_decimal(va_list);*/
int print_int(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_unsigned_int(va_list args);
int print_unsigned_octal(va_list args);
int print_unsigned_hexadecimal(va_list args);
int print_unsigned_Hexadecimal(va_list args);
int print_address(va_list args);
int print_unsigned_bin(va_list args);
int n_u_digit(unsigned int n);

int _putchar(char c);

int is_string_equals(const char *, const char *);
int _length(const char *);

int (*find_format_function(char formatCharacter))(va_list arguments);

#endif /** MAIN_H*/

