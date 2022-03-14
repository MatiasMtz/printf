#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 13432780;
	char *str = "\"sd";
	char *str2 = "asdsa";
	char a = 65;
	int len;
	int len2;
	unsigned int as;
	int b;
	char *s;
	char *s2;
	char *s3;
	char *s4;
	char c;
	int i;

	_printf("\n>TODO PRINTF QUE EMPIECE POR > ES TUYO\n");
	len = _printf(">Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("\n PRINTF TESTS \n\n");
	printf("%u\n", 39265893);
	printf("Length:[%d, %i]\n", len2, len2);
	printf("Negative:[%d]\n", -762534);
	printf("Character:[%c]\n", 'H');
	printf("String:[%s]\n", "I am a string !");
	printf("Len:[%d]\n", len2);
	printf("Hello %i, %s\n", n, str);
	printf("Hello %s, %s, %c\n", str, str2, a);
	_printf(">HANDLING DE CASOS BORDES PRINTF NORMAL\n");
	printf("%d\n", INT_MAX);
	printf("%d\n", INT_MIN);
	printf("%u\n", UINT_MAX);
	printf("%%sadasd%%%s\n", str);
	_printf("%%sadasd%%%s\n", str);
	_printf("\n>PRINTF RANCIO HECHO POR NACHO TESTS \n\n");
	_printf(">Length:[%d, %i]\n", len, len);
	_printf(">Negative:[%d]\n", -762534);
	_printf(">Character:[%c]\n", 'H');
	_printf(">Len:[%d]\n", len);
	_printf(">String:[%s]\n", "I am a string !");
	_printf("\n>MUCHAS VARIABLES\n\n");
	_printf(">Hello %i, %s\n", n, str);
	_printf(">Hello %s, %s, %c\n", str, str2, a);
	_printf("\n>CASOS BORDES PARA INTEGERS\n\n");
	_printf(">%d\n", INT_MAX);
	_printf(">%d\n", INT_MIN);
	_printf(">%u\n", UINT_MAX);
	_printf(">%%sadasd%%%s\n", str);
	c = 'p';
	i = -123455;
	s = "Lorem ipsum dolor sit amet, consectetur adipiscing elit\n";
	s2 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.\n";
	s3 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.\n";
	s4 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.\n";
	_printf("\n>MUCHOS CASOS JUNTOS\n");
	_printf(">fasdf\n%% %z %s\n %c\n %s\n %s\n %s\n %i\n\n\n", s, c, s2, s3, s4, i);
	as = -10;
	_printf("\n>HANDLING DE CASOS RAROS\n\n");
	b = _printf("%u\n", as);
	_printf(">%i\n", b);
	_printf(">PRINTF NORMAL\n");
	b = printf("%u\n", as);
	printf("%i\n", b);
	_printf("\n>CASOS DE NUMEROS BINARIOS\nsi tiene > es tu printf\n");
	_printf(">%b\n", UINT_MAX - 5); /* es un numero par */
	len = _printf(">%b\n", 52);
	_printf("%d\n", len);
	_printf(">%b\n", 554);
	_printf(">%b\n", 5324);
	_printf("\n>CASOS DE NUMEROS OCTALES\nsi tiene > es tu printf\n");
	printf("%o\n", UINT_MAX);
	_printf(">%o\n", UINT_MAX);
	printf("%o\n", 52);
	_printf(">%o\n", 52);
	printf("%o\n", 554);
	_printf(">%o\n", 554);
	printf("%o\n", 5324);
	_printf(">%o\n", 5324);
	_printf(">PROBANDO LA FUNCION %%010d ABAJO\n\n");
	printf("%010d\n", -10);
	_printf(">PROBANDO ROT13 Y REVERSED STRING\n\n");
	_printf(">%R\n", "Hola");
	_printf(">%R\n", "Ubyn");
	/*len = _printf(">%R\n", NULL);
	_printf(">%d\n", len - 1);*/
	_printf(">%r\n", "Hola");
	_printf("\n>PROBANDO HEXADECIMAL\n");
	printf("%x\n", UINT_MAX);
	_printf("-> %x\n", UINT_MAX);
	printf("%x\n", 160);
	_printf("-> %x\n", 160);
	printf("%x\n", INT_MAX);
	_printf("-> %x\n", INT_MAX);
	printf("%x\n", 24908);
	_printf("-> %x\n", 24908);
	_printf("\n>PROBANDO HEXADECIMAL MAYUSCULA\n\n");
	printf("%X\n", 29);
	_printf("-> %X\n", 29);
	printf("%X\n", 160);
	_printf("-> %X\n", 160);
	printf("%X\n", 64);
	_printf("-> %X\n", 64);
	printf("%X\n", 24908);
	_printf("-> %X\n", 24908);
	_printf("\n>PROBANDO CASOS SIN FORMATO COMO %z\n\n");
	_printf(">%z %w %j %\n");
	_printf("\nPROBANDO %%S\n\n");
	_printf("%S\n", "\nBest\nSchoo\tl");
	_printf("%S\n", "Be\nst\tSch\bool");
	_printf("%S\n", "B\test\bScho\nol");
	_printf("\n>CASOS DE FORMATEO ADENTRO DE UN STRING\n\n");
	_printf(">sad%ztad%s\n", "%sASD% %%sa%SDA%asd");
	printf("sad%ztad%s\n", "%sASD% %%sa%SDA%asd");
	_printf("\n>PROBANDO CASOS DE COMPARACION DE LENGTH\n\n");
	len = _printf(">Hello %\n", 24908);
	len2 = printf("Hello %\n", 24908);	
	_printf(">%d\n", len - 1);
	printf("%d\n", len2);
	len = _printf(">asd% wsad\n");
	len2 = printf("sad% wsad\n");
	_printf(">%d\n", len - 1);
	printf("%d\n", len2);
	_printf("\n>CONSIDERAR RESTAR 1 PORQUE ESTAMOS SUMANDO EL > XD\n");
	_printf("\nCASOS DE POINTER ADDRESS (HEXA Y P), TAMBIEN CORROBORANDO EL LENGTH\n\n");
	len2 = printf("%p\n", &len);
	len = _printf(">%p\n", &len);
	_printf(">%d, %d\n", len - 1, len2);
	len2 = printf("%x\n", &len);
	len = _printf(">%x\n", &str);
	_printf(">%d, %d\n", len - 1, len2);
	len2 = printf("%X\n", &len);
	len = _printf(">%X\n", &str);
	_printf(">%d, %d\n", len - 1, len2);
	len2 = printf("%p\n", &str);
	len = _printf(">%p\n", &str);
	_printf(">%d, %d\n", len - 1, len2);
	printf("%p\n", NULL);
	_printf("%p\n", NULL);
	len2 = printf("%z%z\n");
	len = _printf(">%z%z\n");
	_printf(">%d, %d\n", len - 1, len2);
	_printf(">%b\n", 90);
	return (0);
}
