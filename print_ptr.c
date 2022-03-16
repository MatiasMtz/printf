#include "main.h"a
/**
* print_ptr - prints memory address..
* @args: arguments to print.
* Return: Amount of characters printed.
*/
int print_ptr(va_list args)
{
	void *address;
	long int a;
	int count;

	address = va_arg(args, void *);
	if (address == NULL)
	{
		_printf("(nil)");
		return (5);
	}
	a = (unsigned long int)address;
	_putchar('0');
	_putchar('x');
	count = print_lowhex_aux(a);
	return (count + 2);
}
