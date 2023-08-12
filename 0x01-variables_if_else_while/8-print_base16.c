#include <stdio.h

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
	char arr[6] = {"ABCDEF"};

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}

	for (x = 0; x < 6; x++)
	{
		putchar(arr[x]);
	}
	putchar('\n');
	return (0);
}
