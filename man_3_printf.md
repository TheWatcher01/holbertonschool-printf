## _PRINTF(3) - Library Functions Manual

### NAME

`_printf` - format and print data

### SYNOPSIS

```C
#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _printf(const char *format, ...);

```

### DESCRIPTION

The `_printf` function formats and prints data to standard output (stdout) according to the specified format string (`format`). The format string is a text string containing conversion specifiers that indicate how the corresponding arguments should be formatted and displayed.

Conversion specifiers are introduced by the character `%` and are followed by a format code that specifies the data type to be formatted. Some common format codes include:

-   `%c`: Formats and prints a single character.
-   `%s`: Formats and prints a string of characters.
-   `%d`: Formats and prints a signed decimal integer.
-   `%i`: Formats and prints a signed decimal integer (equivalent to `%d`).
-   `%%`: Formats and prints a single percent sign (`%`).

### OPTIONS

In addition to the format specifiers, the `_printf` function also supports the following options:

-   `-c`: Suppresses the padding of characters with spaces.
-   `-s`: Suppresses the padding of strings with spaces.
-   `-d`,  `-i`: Suppresses the printing of the sign for positive integers.
-   `-%`: Suppresses the printing of the leading zero for octal and hexadecimal numbers.

### RETURN VALUE

The `_printf` function returns the number of characters printed (excluding the terminating null byte (`\0`)). If an error occurs, a negative value is returned.

### ERRORS

The `_printf` function may fail and return a negative value if:

-   The format string is invalid.
-   An argument has an incompatible data type.
-   There are not enough arguments to satisfy all the format specifiers in the format string.

### EXAMPLES

The following examples demonstrate how to use the `_printf` function to format and print different types of data:

**Printing a string:**

```C
int n = _printf("Hello, %s!\n", "world");
if (n < 0)
{
	perror("_printf");
	exit(1);
}
```

This code will print the following output:

```C
Hello, world!
```

**Printing an integer:**

```C
int n = _printf("The answer is: %d\n", 777);
if (n < 0)
{
	perror("_printf");
	exit(1);
}
```

This code will print the following output:

```C
The answer is: 777
```

**Printing a floating-point number:**

```C
int n = _printf("Pi is approximately: %f\n", 3.1415926535);
if (n < 0)
{
	perror("_printf");
	exit(1);
}

```

This code will print the following output:

```C
Pi is approximately: 3.141593

```

### STANDARDS

The `_printf` function conforms to the POSIX and C standards.

### AUTHORS

This man page was written by Arsène Giriteka and Teddy Deberdt.

### COPYRIGHT

Copyright © 2023 Holbertonschool. This is free software; see the source code for copying conditions.
