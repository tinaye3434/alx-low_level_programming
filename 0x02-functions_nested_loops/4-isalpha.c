#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: character being tested
 *
 * Return: 1 (true), 0 (false)
 */
int _isalpha(int c)
{
	int i, j;

	for (i = 97; i <= 122; i++)
	{
		for (j = 65; j <= 90; j++)
		{
			if (c == i || c == j)
			{
				return (1);
			}
		}
	}
	return (0);
}
