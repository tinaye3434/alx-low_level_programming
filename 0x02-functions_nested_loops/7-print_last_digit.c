#include "main.h"

/**
 * print_last_digit - Computes last digit
 * of given integer
 *
 * @n: integer being tested
 *
 * Return: returns the last digit
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
