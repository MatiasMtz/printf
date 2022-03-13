#include "main.h"
/**
*print_rot13 - print string in rot13
*@args: arguments to print.
*Return: 0 if success.
*/
int print_rot13(va_list args)
{
        int i, j, counter = 0;
        int k;
        char *s = va_arg(args, char *);
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
