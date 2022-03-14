#include "main.h"
/**
 * _strlen - check the code
 * @s: pointer to a
 * Return: length if success.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s[length] != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
