#include "main.h"
/**
 *_printf.c - 
 *@format: string that contains the format to print
 */

int _printf(const char *format, ..)
{
	print my_print{
	{"d", print_number};
	{"i", print_number};
	{"c", print_char};
	{"s", print_string};
	{NULL, NULL};
};
	int a = 0, b;
	va_list args;
	
	va_start(args, format);
	/**
	 * if (format == NULL || format[0] = '%')
	{
		return;
	} 
	*/


	for (a = 0; my_print[a]; a++)
	{
		if (format[1] == my_print[a].str[1])
			return (my_print[a].f);
	}
}	
