#ifndef HEADER_FILE_H
#define HEADER_FILE_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);

int _printf(const char *format, ...);
int print_char(va_list);
int print_percent(va_list);
int print_int(va_list);
int print_unsigned_int(va_list va);
int print_unsigned_octal(va_list va);
int print_unsigned_hexadecimal(va_list va);
int print_unsigned_Hexadecimal(va_list va);
int print_adress(va_list va);

int n_int_digit(int);
int n_u_digit(unsigned int);

int is_string_equals(const char *, const char *);
int print_string(va_list);
int (*get_print_function(char *))(va_list);
char *get_format(const char *str);
int _length(const char *);



#endif
