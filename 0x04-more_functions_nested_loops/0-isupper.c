#include "main.h"

/**
 * _isupper - checks for capital letters
 * @c: character being tested
 *
 * Return: 1 (true), 0 (false)
 */

int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
