#include "main.h"
#include <stdio.h>

int actual_prime(int n, int i);

/**
 * is_prime_number - check the code
 * @n: number to check
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	return (actual_prime(n, 2));
}

int actual_prime(int n, int i)
{
	if (i >= n && i > 1)
		return (1);
	if (n % i == 0 || n <= 1)
		return (0);
	return (actual_prime(n, i + 1));
}
