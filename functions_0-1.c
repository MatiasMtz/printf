#include "main.h"
/**
 * print_int - prints intergers.
 * @args: arguments to print.
 * Return: 0 if success.
 */
int print_int(va_list args)
{
	int n;
	unsigned int numbers;
	unsigned int positive_numbers;
	unsigned int count;

	n = va_arg(args, int);
	if (n < 0)
	{
		_putchar('-');
		numbers = n * -1;
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
	}
	return (0);
}

/**
 * print_char - prints characters.
 * @args: arguments to print.
 * Return: 0 if success.
 */
int print_char(va_list args)
{
	int c;

	c = va_arg(args, int);
	_putchar(c);
	return (0);
}

/**
 * print_string - prints strings.
 * @args: arguments to print.
 * Return: 0 if success.
 */
int print_string(va_list args)
{
	char *s;
	unsigned int count = 0;

	s = va_arg(args, char *);
	while (s[count] != '\0')
	{
		_putchar(s[count]);
		count++;
	}
	return (0);
}
