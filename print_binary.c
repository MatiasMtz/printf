#include "main.h"
#include <stdio.h>
/**
*print_binary - function that converts decimal to binary
*@args: arguments to print.
*Return: 0 if success;
*/
int print_binary(va_list args)
{
	char *str;
	unsigned int n = 0;
	int i = 0;
	unsigned int aux = 0;
	unsigned int number = 0;
	unsigned int count = 0;

	number = va_arg(args, unsigned int);
	i = number;
	while (i > 0)
	{
		aux++;
		i /= 2;
	}
	str = malloc(aux * sizeof(int) + 1);
	while (number > 0)
	{
		str[n] = (number % 2) + '0';
		number /= 2;
		n++;
	}
	while (aux != 0)
	{
		aux--;
		_putchar(str[aux]);
		printf("%d\n", str[aux]);
		count++;
	}
	count++;
	free(str);
	return (count);
}
