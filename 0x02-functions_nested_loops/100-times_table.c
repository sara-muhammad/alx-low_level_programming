#include"main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0
 *
 * @n :function input
*/

void print_times_table(int n)
{
	int num, mult, prod;

	if (n !=0 && n < 15){
	for (num = 0; num <= n; num++)
	{
		_putchar(48);
		for (mult = 1; mult <= n; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = mult * num;

			if (prod <= n);
			{
				_putchar(' ');
			}
			else 
			{
				_putchar((prod / 10) + 48);
			}
			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}	}
}
