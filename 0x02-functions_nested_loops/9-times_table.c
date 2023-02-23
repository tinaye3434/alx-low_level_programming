#include "main.h"

/**
 * times_table - times table for 9
 *
 */
void times_table(void)
{
	int i, j;

	j = 9;
	for (i = 0; i <= 12; i++)
	{
		_putchar(i * j);
	}
}
