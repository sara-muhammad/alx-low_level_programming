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
	char c[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; c < 26; i++)
		putchar(c[i]);
	putchar("\n");
	return (0);
}
