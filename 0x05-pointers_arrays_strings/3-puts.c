#include "main.h"

/**
 * _puts - prints a string
 * @str: the string
 * Return: the length of the string
 */

void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_puts(str[i]);
	}
	_putchar('\n');
}
