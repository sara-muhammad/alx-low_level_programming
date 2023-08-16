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
			if (n == 0)
			{
				multi = i * n;
				printf("%d,", multi);
			}
			else if (n < 9)
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
			else
			{
				multi = i * n;
				if (multi <= 9)
					printf("  %d", multi);
				else
					printf(" %d", multi);
			}
		}
		printf(":\n");
	}
}
