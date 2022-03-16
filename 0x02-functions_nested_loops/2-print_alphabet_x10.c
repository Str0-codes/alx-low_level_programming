#include "main.h"

/**
 * print_alphabet_x10
 * prints all the alphabets in lower case 10 times
 */

void print_alphabet_x10(void)
{
	int alp;
	int br;

	for (br = 0; br < 10; br++)
	{
		for (alp = 97; alp <= 122; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
