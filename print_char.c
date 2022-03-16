#include "main.h"
/**
 * print_char - prints characters.
 * @args: arguments to print.
 * Return: 0 if success.
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	return (1);
}
