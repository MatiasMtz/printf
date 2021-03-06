#include "main.h"
/**
 *_printf - copy of the printf function.
 *@format: string that contains the format to print.
 *Return: 0 if success.
 */
int _printf(const char *format, ...)
{
print my_print[] = {
	{"d", print_int}, {"i", print_int}, {"s", print_string}, {"c", print_char},
	{"r", print_revstr}, {"o", print_octal}, {"x", print_lowhex},
	{"b", print_binary}, {"R", print_rot13}, {"%", print_p}, {"p", print_ptr},
	{"u", print_unsigned}, {"X", print_upphex}, {"S", print_S}, {NULL, NULL},
};
	int count = 0, flags = 0, length = 0, s = 0;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
		return (-1);
	while (format[count] != '\0')
	{
		flags = 0;
		if (format[count] == '%')
		{
			s = 0;
			if (format[count + 1] == '\0')
				return (-1);
			while (my_print[flags].str)
			{
				if (format[count + 1] == my_print[flags].str[0])
				{
					length += (my_print[flags].f(arg)) - 2;
					count++;
					s = 1;
					break;
				}
				flags++;
			}
			if (s == 0)
				_putchar(format[count]);
		}
		else
			_putchar(format[count]);
	count++;
	}
	va_end(arg);
	return (count + length);
}
