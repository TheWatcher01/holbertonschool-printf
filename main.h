#ifndef HEADER_FILE_H
#define HEADER_FILE_H

#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(char *format, ...);
int print_char(void *s);
int print_percent(void *);
int is_string_equals(char *, char *);
int print_string(void *);
int is_string_equals(char *a, char *b);
int (*get_print_function(char *))(void *);
char *get_format(char *str);
int _length(char *);
void *get_arg(va_list *values, char *format);

#endif
