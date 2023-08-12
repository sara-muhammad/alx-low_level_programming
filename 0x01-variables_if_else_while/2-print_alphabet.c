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
	char c = 'a';

	for (c = 'a'; c < 'z'; c++)
		putchar(c);
	putchar("\n");
	return (0);
}
