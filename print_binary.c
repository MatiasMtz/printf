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

	number = va_arg(args,int);
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
	if (str == NULL)
		return (-1);
	aux = 0;
	while (number > 0)
	{
		str[aux] = (number % 2) + '0';
		number /= 2;
		aux++;
	}
	str[aux] = '\0';
	while (aux != 0)
	{
		aux--;
		_putchar(str[aux]);
	}
	free(str);
	return (count);
}
