#include "main.h"
/**
*print_hexa - function that converts decimal to binary
*@args: arguments to print.
*Return: 0 if success;
*/
int print_hexa(va_list args)
{
        char *str;
        int n = 0;
        int i = 0;
        unsigned int aux = 0;
        unsigned int number = 0;
        unsigned int count = 0;

        number = va_arg(args, unsigned int);
        i = number;
        while (i > 0)
        {
                aux++;
                i /= 16;
        }
        str = malloc(aux * sizeof(int) + 1);
        while (number > 0)
        {
                str[n] = (number % 16) + '0';
                number /= 16;
                n++;
        }
        while (n != 0)
        {
                _putchar(str[n]);
                n--;
                count++;
        }
        n--;
        _putchar(str[n]);
        free(str);
        return (count);
}
