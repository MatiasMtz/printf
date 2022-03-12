#ifndef Header_h
#define Header_h

#include <stdarg.h>
#include <stdlib.h>

/**
 *
 *
 *@str: 
 *@f: function of specific type
 */

typedef struct prt {
	char * str;
	int (*f)(va_list args);
}print;

int print_number(va_list args);
int print_char(va_list args);
int print_string (va_list args);
int printf(const char *format, ...);
int _putchar(char c);

#endif
