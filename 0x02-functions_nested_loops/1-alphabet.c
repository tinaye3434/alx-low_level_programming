#include "main.h"

/**
 * main - main entry for program
 *
 * print_alphabet - Prints alphabet in small cap
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
