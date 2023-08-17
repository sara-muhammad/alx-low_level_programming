#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * positive_or_negative - entry point
 *
 * @n : function input
*/
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
}
