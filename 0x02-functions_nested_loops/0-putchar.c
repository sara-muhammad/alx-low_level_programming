#include "main.h"
#include<unistd.h>

/**
 *_putchar - writes the character c to stdout
 *
 * @c: the character to print
 *
 * Return:1
*/


int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	char str[] = "_putchar";

	for (int ch = 1; ch < 8; ch++)
	{
		_putchar(str[ch]);
	}
	_putchar('\n');
	return (0);
}
