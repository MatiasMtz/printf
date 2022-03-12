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

	va_start(args, format);
	va arg(args, int) = n;
	if (n < 0)
	{
		_putchar('-'); //to print negative numbers//
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
		positive_numbers /= 10; //to print numbers larger than 1 digit//
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
	char c;

	va_start(args);
	va_arg(args, char) = c;
	_putchar(c);
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

	va_start(args);
	va_arg(args, char *) = s;
	while (s[count] != '\0')
	{
		_putchar(s[count]);
		count++;
	}
	return (0);
}
