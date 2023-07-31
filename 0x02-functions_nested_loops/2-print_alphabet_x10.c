#include <stdio.h>
/**
* print_alphabet_x10 - Prints the alphabet in lowercase 10 times.
*
* Description: This function prints the lowercase alphabet from 'a' to 'z'
*              10 times, followed by a new line, using the _putchar function
*              twice.
*/
void print_alphabet_x10(void)
{
char letter;
int repeat;
for (repeat = 0; repeat < 10; repeat++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
}
putchar('\n');
}
