#include"main.h"
/**
 * print_sign - prints the sign of number
 *
 * @n : checks input of function
 *
 * Return: 1(positive number) and 0(zero) and -1(otherwise)
*/


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
