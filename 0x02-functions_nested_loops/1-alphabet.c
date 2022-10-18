#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 * Authored by Dr Kalu
 */

void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
