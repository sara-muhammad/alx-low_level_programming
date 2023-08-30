#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - check the code
 * @a :input matrix
 * @size : size of matrix
 */


void print_diagsums(int *a, int size)
{
	int i, n;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
	{
		sum1 = sum1 + a[i];
	}
	
	n = size - 1;

	while(n <= (size * size) - size)
	{
		sum2 = sum2 + a[n];
		n = n + size - 1;
	}
	
	printf("%d, %d\n", sum1, sum2);
}
