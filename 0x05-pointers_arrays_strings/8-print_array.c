#include"main.h"


/**
 * print_array- check the code for
 *
 * @a: function input
 *
 * @n:function input
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (i == n - 1)
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
}
