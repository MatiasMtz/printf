#include "main.h"
/**
* print_lowhex_aux - prints decimal numbers into base 16.
* @a: parameters.
* Return: Amount of characters printed.
*/
int print_lowhex_aux(unsigned long int a)
{
	char *str;
	unsigned long int n = 0, number = 0, j = 0, aux = 0, i = number, count = 0;

	number = a;
	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	while (i > 0)
	{
		i /= 16;
		aux++;
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
			str[j] = n + 87;
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
