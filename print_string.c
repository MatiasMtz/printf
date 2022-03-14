#include "main.h"
/**
 * print_string - prints strings.
 * @args: arguments to print.
 * Return: 0 if success.
 */
int print_string(va_list args)
{
	char *s;
	unsigned int count = 0;
	unsigned int letter = 0;
	unsigned int length = 0;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		s = "(NULL)";
		length = _strlen(s);
		while (letter < length)
		{
			_putchar(s[letter]);
			letter++;
		}
		return (length);
	}
	else
	{
		length = _strlen(s);
		while (letter < length)
		{
			_putchar(s[i]);
			letter++;
		}
		return (length);
	}
}
