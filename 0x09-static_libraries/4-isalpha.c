#include"main.h"

/**
 *_isalpha - function to check if character is alphabet character
 *
 *@c: checks input of function
 *
 * Return: 1(success) and 0(otherwise)
*/


int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c < 90)
		return (1);
	else
		return (0);
}
