#include <stdio.h>

/**
 * main - entry point
 * Return: 0 success
 */
int main(void)
{
	char letter = 'a';
	char letterBig = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	while (letterBig <= 'Z')
        {
                putchar(letterBig);
                letterBig++;
        }

	putchar('\n');

	return (0);
}
