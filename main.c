#include "main.h"
#include <stdio.h>

int main()
{
	char *f1 = get_format("%lu");
	char *f2 = get_format("%");
	char *d = "HOLLLA";
	char i = 'T';
	
	_printf("%c", i);
	return (0);
}
