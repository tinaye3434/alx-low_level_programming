#include "main.h"

/**
 * _islower - Checks if character is lowercase
 *
 * @c: The character being checked
 *
 * Return: 0 (false) 1 (true)
 */
int _islower(int c)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
