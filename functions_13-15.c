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

/**
 *
 *
 *
 */
int print_rot13(va_list args)
{
	int i, j, counter = 0;
	int k;
	char *s = va_arg(args, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};
	
	for (i = 0; s[i] ; i++)
	{
		k = 0;
		for (j = 0; alpha[j] && !k; j++)
		{
			if (s[i] == alpha[j])
			{
				_putchar(beta[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}
