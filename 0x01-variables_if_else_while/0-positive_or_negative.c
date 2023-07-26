#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* main - find if number is positive or negative
 * Return: success is 0, else, 1
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		put("is positive");
	}
	if (n < 0)
	{
		put("is negative");
	}
	if (n = 0)
	{
		put("is zero");
	}
	return (0);
}
