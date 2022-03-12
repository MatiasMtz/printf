#include "main.h"
#include <stdio.h>
/**
 *_printf - copy of the printf function.
 *@format: string that contains the format to print.
 *print - struct that contains flags.
 *Return: 0 if success.
 */

int _printf(const char *format, ...)
{
	print my_print[] = {
	{"d", print_int},
	{"i", print_int},
	{"s", print_string},
	{"c", print_char},
	{"%|r", print_rev_string},
	{NULL, NULL},
};
	unsigned int count = 0;
	unsigned int flags = 0;
	unsigned int length = 0;
	va_list arg;

	va_start(arg, format);
	while (format != NULL && format[count] != '\0')
	{
		flags = 0;
		if (format[count] == '%')
		{
			while (flags < 5)
			{
				if (my_print[flags].str[0] == format[count + 1])
				{
				length += (my_print[flags].f(arg)) - 2;
				break;
				}
				flags++;
			}
			count++;
		}
		else
		{
			_putchar(format[count]);
		}
		count++;
	}
	va_end(arg);
	return (count);
}
