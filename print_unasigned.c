#include "main.h"
/**
 *
 *
 */
int print_unsigned(va_list args)
{
	unsigned int n;
	int count2 = 0;
	unsigned int num;
	unsigned int positive;
	unsigned int count;

	n = va_arg(args, unsigned int);

	num = n;
	positive = num;
	count = 1;

	while (positive < 10)
	{
		positive /= 10;
		count *= 10;
	}
	for ( ; count >= 1; count /= 10)
	{
		_putchar(((num / count) % 10) + '0');
		count2++;
	}
	return (count2);
}
