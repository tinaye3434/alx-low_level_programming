#include "main.h"

/**
 * times_table - times table for 9
 *
 */
void times_table(void)
{
	int i, j;

	j = 57;
	for (i = 48; i <= 58; i++)
	{
		_putchar(i * j);
		_putchar(' ');
	}
}
