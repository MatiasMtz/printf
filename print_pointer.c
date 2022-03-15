#include "main.h"
/*
 * print_pointer - prints a memory address.
 * @args: argument to print.
 * Return: amount of chars printed.
 */
int print_pointer(va_list args)
{
	void *p;
	long int a;
	int b;

	p = va_arg(args, void *);
	if (p == NULL)
	{
		_printf("(nil)");
		return(6);
	}
	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = _printf("%x", a);
	return (b + 2);
}
