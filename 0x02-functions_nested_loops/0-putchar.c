#include "main.h"

/**
 * main - ENtry point
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	char *sh = "putchar";

	while (*sh)
	{
		putchar(*sh);
		sh++;
	}
	putchar('\n');

	return (0);
}
