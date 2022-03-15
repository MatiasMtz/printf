#include "main.h"                                                                                                                                                                                                                                                                          /**
     * main - Entry point
     *
     * Return: Always 0
     */
    int main(void)
    {
        int len;
        _printf("%S\n", "Best\nSchool");
        len = _printf("%S\n", NULL);
        _printf("%d\n", len);
        len = _printf("%S\n", "Best\tSchool");
        _printf("%d\n", len);
        len = _printf("\nPROBANDO %%S\n\n");
        _printf("%d\n", len);
        len = _printf("%S\n", "Best\nSchool");
        _printf("%d\n", len);
        len = _printf("%S\n", "\nBest\nSchoo\tl");
        _printf("%d\n", len);
        len = _printf("%S\n", "Be\nst\tSch\bool");
        _printf("%d\n", len);
        len = _printf("%S\n", "B\test\bScho\nol");
        _printf("%d\n", len);
        len = _printf("%S\n", "");
        _printf("%d\n", len);
        return (0);
    }
