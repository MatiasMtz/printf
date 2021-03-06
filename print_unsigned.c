#include "main.h"
/**
 *print_unsigned - pirnt unsigned decimal number
 *@args: argument to print
 *Return: 0 if success
 */
int print_unsigned(va_list args)
{
	unsigned int n;
	int count2 = 0;
	unsigned int numbers;
	unsigned int positive_numbers;
	unsigned int count;

	n = va_arg(args, unsigned int);

	numbers = n;
	positive_numbers = numbers;
	count = 1;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (positive_numbers > 9)
	{
		positive_numbers /= 10;
		count *= 10;
	}
	for ( ; count >= 1; count /= 10)
	{
		_putchar(((numbers / count) % 10) + '0');
		count2++;
	}
	return (count2);
}
