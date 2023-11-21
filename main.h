#ifndef HEADER_FILE_H
#define HEADER_FILE_H

#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(char *s);
int print_percent(char *);
int (*get_print_function)(char *);
int is_string_equals(char *, char *);
int print_string(char *);
#endif
