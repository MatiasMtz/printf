#include "main.h"
/**
 *_printf - copy of the printf function.
 *@format: string that contains the format to print.
 *print - struct that contains flags.
 *Return: 0 if success.
 */

int _printf(const char *format, ...)
{
	print my_print[] = {
	{"d", print_int}, {"i", print_int}, {"s", print_string}, {"c", print_char},
	{"r", print_rev_string}, {"o", print_octal}, {"b", print_binary},
	{"x", print_lowhexadecimal}, {"R", print_rot13}, {"%", print_p},
	{NULL, NULL},
};
	unsigned int count = 0, flags = 0, length = 0;
	va_list arg;

	va_start(arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[count] != '\0')
	{
		flags = 0;
		while (flags < 10)
		{
			if (my_print[flags].str[0] == format[count + 1] &&
					my_print[flags].str[1] == format[count + 1])
			{
			length += my_print[flags].f(arg);
			break;
			}
			flags++;
		}
		_putchar(format[count]);
		count++;
		length++;
	}
	va_end(arg);
	return (count);
}
