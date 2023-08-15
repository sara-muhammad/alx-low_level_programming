#include"main.h"

/**
 * _abs - function to count the absluote value
 *
 * @n: input of function
 *
 * Return: the absluote value
*/


int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		return (n);
	}
	else
		return (n);
}
