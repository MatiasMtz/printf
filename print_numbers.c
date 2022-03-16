#include "main.h"a
/**
 * print_int - prints intengers.
 * @args: arguments to print.
 * Return: 0 if success.
 */
int print_int(va_list args)
{
	int n;
	int count2 = 0;
	unsigned int numbers;
	unsigned int positive_numbers;
	unsigned int count;

	n = va_arg(args, int);
	if (n < 0)
	{
		_putchar('-');
		numbers = n * -1;
		count2++;
	}
	else
	{
		numbers = n;
	}
	positive_numbers = numbers;
	count = 1;
	while (positive_numbers > 9)
	{
		positive_numbers /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((numbers / count) % 10) + '0');
		count2++;
	}
	return (count2);
}
