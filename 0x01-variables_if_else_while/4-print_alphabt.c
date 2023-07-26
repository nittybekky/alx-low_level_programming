#include <stdio.h>

/**
 * main - entry point
 * return: 0 is success
 */

int main(void)
{
	char letter = 'a';

	while (letter != 'q' && letter != 'e')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return 0;
}
