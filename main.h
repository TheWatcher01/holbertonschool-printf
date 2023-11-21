#ifndef HEADER_FILE_H
#define HEADER_FILE_H

#include <stdlib.h>
#include <stdarg.h>

int print_percent(char);
int ((*get-print_function)(char *))(char *);
int is_string_equals(char *, char *);
#endif
