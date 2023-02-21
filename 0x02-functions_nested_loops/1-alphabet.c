#include "main.h"

/**
 * main - main entry for program
 * print_alphabet - prints alphabet in small caps
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return;
}
