#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>

/**
 *struct prt - struct that contains functions.
 *@str - string that contains the format.
 *@f: function of specific type.
 */

typedef struct prt
{
	char *str;
	int (*f)(va_list args);
} print;

int print_int(va_list args);
int print_char(va_list args);
int print_string(va_list args);
int _printf(const char *format, ...);
int _putchar(char c);
#endif
