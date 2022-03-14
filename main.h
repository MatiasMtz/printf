#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *struct prt - struct that contains functions.
 *@str: string that contains the format.
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
int print_rev_string(va_list args);
int print_rot13(va_list args);
int print_octal(va_list args);
int print_binary(va_list args);
int print_p(va_list args);
int print_lowhexadecimal(va_list args);
int _putchar(char c);
int _printf(const char *format, ...);
#endif
