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
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	char aup[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(aup[i]);
	}
	putchar('\n');
	return (0);
}
