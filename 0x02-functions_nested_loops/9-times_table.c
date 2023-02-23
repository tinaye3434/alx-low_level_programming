#include "main.h"

/**
 * times_table - times table for 9
 *
 */
void times_table(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			_putchar(i * j);
			_putchar(' ');
		}
	}
}
