#include"main.h"

/**
 *print_alphabet_x10-print alphabet 10xtimes
*/


void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		print_alphabet();
		putchar('\n');
	}
}
