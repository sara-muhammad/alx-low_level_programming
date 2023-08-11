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
	char ch = 'a';

	while (ch <= 'z')
	{
		 putchar(ch);
		 ch++;
	}
	putchar("\n");

	return (0);
}
