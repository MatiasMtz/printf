#include "main.h"
/**
 *print_rev_string - function that reverse a string.
 *@args: argument to print.
 *Return: 0 if success.
 */

int print_rev_string(va_list args)
{
	int strlen = 0;
	int count = 0;
	char *s;

	s = va_arg(args, char *);
	
	while (s[count++])
	{
		strlen++;
	}
	for (count = strlen - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	return (0);
}
