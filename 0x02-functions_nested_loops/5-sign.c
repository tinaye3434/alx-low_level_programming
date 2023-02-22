#include "main.h"

/**
 * print_sign - prints sign of given number
 * @n: number to be tested
 *
 * Return: 1 (positive) 0 (zero) -1 (negative)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (0);
}
