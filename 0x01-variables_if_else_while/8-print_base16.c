#include <stdio.h>

/**
 * main - entry point
 * Return: 0 is success
 */

int main(void)
{
	char hexa;
	
	for (hexa = '0'; hexa <= '9'; hexa++)
	{
		putchar(hexa);
	}
	for (hexa = 'a'; haxa <= 'f'; hexa++)
	{
		putchar(hexa);
	}

	putchar('\n');

	return (0);
}
