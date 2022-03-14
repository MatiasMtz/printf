#include "main.h"
/**
* print_upperhexadecimal - prints decimal numbers into base 16 with mayus.
* @args: arguments to print.
* Return: Amount of characters printed.
*/
int print_upperhexadecimal(va_list args)
{
	char *str;
	unsigned int n = 0, number = 0, j = 0, aux = 0, i = number, count = 0;

	number = va_arg(args, unsigned int);
	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	while (i > 0)
	{
		aux++;
		i /= 16;
	}
	str = malloc(aux * sizeof(char) + 1);
	if (str == NULL)
		return (-1);
	while (number > 0)
	{
		n = number % 16;
		if (n < 10)
		{
			str[j] = n + 48;
			j++;
		}
		else
		{
			str[j] = n + 55;
			j++;
		}
		number = number / 16;
	}
	while (j != 0)
	{
		j--;
		_putchar(str[j]);
		count++;
	}
	free(str);
	return (count);
}
