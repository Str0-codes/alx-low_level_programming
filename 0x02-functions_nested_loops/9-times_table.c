#include "main.h"

/**
 * times_table - display 9 x table
 *
 */

void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;

			if (c > 9)
			{
				_putchar((c / 10) + '0');

