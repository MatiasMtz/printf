#include "main.h"
/**
 * print_string - prints strings.
 * @args: arguments to print.
 * Return: 0 if success.
 */
int print_string(va_list args)
{
	char *s;
	unsigned int count = 0;

	s = va_arg(args, char *);
	while (s[count] != '\0')
	{
		_putchar(s[count]);
		count++;
	}
	return (0);
}
