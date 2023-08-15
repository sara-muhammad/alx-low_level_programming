#include"main.h"

/**
 * times_table - function that prints the 9 times table
*/


void times_table(void)
{
	int i;
	int n;
	int multi;

	printf("%d", 0);

	for (i = 1; i <= 9; i++)
	{
		for (n = 1; n <= 9; n++)
		{
			multi = i * n;
			if (multi <= 9)
			{
				printf("  %d,", multi);
			}
			else
			{
				printf(" %d,", multi);
			}
		}
		printf("\n");
	}
}
