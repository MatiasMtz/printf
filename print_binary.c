#include "main.h"
/**
* print_binary - prints decimal numbers into octal base.
* @args: arguments to print.
* Return: Amount of characters printed.
*/
int print_binary(va_list args)
{
	char *str;
	int n = 0;
	int i = 0;
	unsigned int aux = 0;
	unsigned int number = 0;
	unsigned int count = 0;

	number = va_arg(args, unsigned int);
	i = number;

	if (number == 0)
	{
		_putchar('0');
		return(1);
	}
	while (i > 0)
	{
		aux++;
		i /= 2;
	}
	count = a;
	str = malloc(aux * sizeof(char) + 1);
	while (number > 0)
	{
		str[n] = (number % 2) + '0';
		number /= 2;
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
