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
	{NULL, NULL},
};
	unsigned int count = 0;
	unsigned int flags = 0;
	va_list arg;

	va_start(arg, format);
	while (format != NULL && format[count] != '\0')
	{
		if (format[count] == '%')
		{
			if ((format[count] + 1) != '\0')
			{
				flags = 0;
				while (flags < 4)
				{
					if (my_print[flags].str[0] == format[count])
					{
					_putchar(my_print[flags].f(arg));
					break;
					}
					flags++;
				}
				count++;
			}
			else
			{
				return (0);
			}
		}
		_putchar(format[count]);
		format++;
	}
	va_end(arg);
	return (0);
}
