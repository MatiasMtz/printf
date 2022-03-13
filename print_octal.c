#include "main.h"
/**
* print_octal - prints decimal numbers into octal base.
* @args: arguments to print.
* Return: Amount of characters printed.
*/
int print_octal(va_list args)
{
	char *str;
	int n = 0;
	int i = 0;
	unsigned int aux = 0;
	unsigned int number = 0;
	unsigned int count = 0;

	number = va_arg(args, unsigned int);
	i = number;
	while (i > 0)
	{
		aux++;
		i /= 8;
	}
	str = malloc(aux * sizeof(char) + 1);
	while (number > 0)
	{
		str[n] = (number % 8) + '0';
		number /= 8;
		n++;
	}
	while (n != 0)
	{
		n--;
		_putchar(str[n]);
		count++;
	}
	free(str);
	return (count);
}
