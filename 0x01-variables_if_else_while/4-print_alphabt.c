#include <stdio.h>

/**
 * main - Program that prints all characters of the alphabet except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z' && (!'q' || !'e'); ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
