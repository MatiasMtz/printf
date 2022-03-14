#include "main.h"
/**
* print_binary - prints decimal numbers into octal base.
* @args: arguments to print.
* Return: Amount of characters printed.
*/
int print_binary(va_list args)
{
	char *str;
	int i;
	unsigned int aux = 0;
	unsigned int number;
	unsigned int count;

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
	count = aux;
	str = malloc(aux * sizeof(char) + 1);
	while (number > 0)
	{
		str[i] = (number % 2) + '0';
		number /= 2;
		i++;
	}
	while (i != 0)
	{
		i--;
		_putchar(str[i]);
		count++;
	}
	free(str);
	return (count);
}
