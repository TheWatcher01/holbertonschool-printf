![holberton_logo](https://github.com/TheWatcher01/holbertonschool-printf/blob/Ted_Code/printf_flowchart_pics.jpeg)

# Create a Printf Function

## Project Overview

This project aims to recreate the printf function, a standard library function in the C programming language. The printf function allows you to display formatted text onto the user interface.

Compilation

To compile the files that make up the printf function, use the following command:

```

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

```

## Requirements

The following requirements must be met for this project:

**1.Text Editor:** Use the Vi text editor to create and modify the source code.

**2.Operating System:** The project must be developed and compiled on Ubuntu 20.04 LTS, a Linux distribution.

**3.Coding Style:** Adhere to the Betty style guidelines for consistent and readable code.

**4.Global Variables:** Avoid using global variables; instead, use local variables within functions.

**5.File Endings:** Ensure that all source code files (.c files) end with a newline character (\n).

**6.Function Limits:** Limit the number of functions within each source code file to five or less.

**7.Header Inclusion:** Include the "main.h" header file in all .c files to access necessary declarations and definitions.

**Example Usage**

**Consider the following input code:**

```C

int main(void) {
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	return (0);
}

```

This code demonstrates how to use the _printf function to format and display various types of data, including integers, characters, strings, and addresses.

## Expected Output

When executed, the provided code will produce the following output:

```

Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octalCreate a Printf Function

```

## Project Overview

This project aims to recreate the printf function, a standard library function in the C programming language. The printf function allows you to display formatted text onto the user interface.

## Compilation

To compile the files that make up the printf function, use the following command:

```

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

```

## Requirements

The following requirements must be met for this project:

**Text Editor:** Use the Vi text editor to create and modify the source code.

**Operating System:** The project must be developed and compiled on Ubuntu 20.04 LTS, a Linux distribution.

**Coding Style:** Adhere to the Betty style guidelines for consistent and readable code.

**Global Variables:** Avoid using global variables; instead, use local variables within functions.

**File Endings:** Ensure that all source code files (.c files) end with a newline character (\n).

**Function Limits:** Limit the number of functions within each source code file to five or less.

**Header Inclusion:** Include the "main.h" header file in all .c files to access necessary declarations and definitions.

## Example Usage

**Consider the following input code:**

```C
int main(void) {
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	return (0);
}

```

This code demonstrates how to use the _printf function to format and display various types of data, including integers, characters, strings, and addresses.

## Expected Output

**When executed, the provided code will produce the following output:**

```

Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal

```



