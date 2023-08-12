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
	char c[26] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(c[i]);
	}
	putchar("\n");
	return (0);
}
