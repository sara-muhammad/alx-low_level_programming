#include"main.h"

/**
 * print_last_digit - function to print last digit of number
 *
 * @n: function input
 *
 * Return: the value of last digit
*/


int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = -n;
		last_digit = n % 10;
	}
	else
		last_digit = n % 10;
	if (last_digit < 0)
		last_digit = -last digit;
	_putchar(last_digit + '0');
	return (last_digit);
}
