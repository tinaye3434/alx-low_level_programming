#include <stdio.h>

/**
 * main - Program that prints all characters of the alphabet except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
		if (ch != 'q' && ch != 'e')
			putchar(ch);
		ch++;
	putchar('\n');
	return (0);
}
