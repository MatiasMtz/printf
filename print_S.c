#include "main.h"
/**
 * print_S - prints just certain ascii chars.
 * @args: arguments to compare.
 * Return: amount of printed chars.
 */
int print_S(va_list args)
{
	char *str;
	unsigned int i = 0, count = 0;
	int temp = 0;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		_printf("(null)");
		return (6);
	}
	while (str[i] != '\0')
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count = count + 2;
			temp = str[i];
			print_upphex_aux(temp);
			count++;
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
		i++;
	}
	return (count);
}
