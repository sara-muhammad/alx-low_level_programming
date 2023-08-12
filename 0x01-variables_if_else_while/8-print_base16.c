#include <stdio.h>

/**
 * main - entry pointer
 *
 * Description: A c programm prints alphabet in lower case
 *
 * Return: 0(Success)
*/


int main(void)
{
	int i;
	int x;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	for (x = 97; x < 103; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
