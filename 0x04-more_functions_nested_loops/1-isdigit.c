#include "main.h"

/**
 * _isdigit - check for numbers
 * @c: character being tested
 *
 * Return: 1 (true), 0 (false)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
