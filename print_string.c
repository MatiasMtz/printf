#include "main.h"a
/**
 * print_string - prints strings.
 * @args: arguments to print.
 * Return: 0 if success.
 */
int print_string(va_list args)
{
	char *str;
	unsigned int count = 0;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	return (count);
}
