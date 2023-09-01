#include"main.h"

/**
 * _islower-check if character in lower case
 *
 * @c:is the character of alphabet
 *
 *Return:1(success)
*/


int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
