#include"main.h"

/**
 * print_to_98 - Function that prints all natural numbers from n to 98
 *
 *@n:function input
*/

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
			printf("%d, ", i);
		printf("%d", 98);
	}

	else if (n > 98)
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
		printf("%d", 98);
	}
	else
	{
		printf("%d", n);
	}
	printf("\n");
}
