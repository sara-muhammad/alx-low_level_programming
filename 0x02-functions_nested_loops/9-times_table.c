#include"main.h"

/**
 * times_table - function that prints the 9 times table
*/


void times_table(void)
{
	int i;
	int n;
	int multi;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			multi = i * n;
			printf("%d, ", multi);
		}
		printf("\n");

	}
}
