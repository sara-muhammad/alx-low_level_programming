#include"main.h"

/**
 * swap_int - check the code
 *
 * @a: function input.
 *
 * @b : function input.
 */


void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
