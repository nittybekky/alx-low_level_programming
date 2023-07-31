#include <stdio.h>
/**
* print_alphabet - Prints the lowercase alphabet followed by a new line
*
* Description: Prints the lowercase alphabet from 'a' to 'z',
* followed by a new line, using the _putchar function twice.
*/
void print_alphabet(void)
{
char letter;
/* Loop through the lowercase alphabet and print each letter */
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
/* Print a new line after printing the alphabet */
_putchar('\n');
}
