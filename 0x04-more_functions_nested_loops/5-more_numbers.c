#include "main.h"

/**
 * more_numbers - check the code
 */

void more_numbers(void)
{
	int i;
	int num;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			num = i;
			if (i >= 10)
			{
				_putchar(((num / 10) % 10) + 48);
				num = num % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
