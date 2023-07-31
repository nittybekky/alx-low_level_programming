#include <stdio.h>
/**
* _islower - Checks for lowercase character.
* @c: The character to be checked.
*
* Return: 1 if c is lowercase, 0 otherwise.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
putchar('1');
else
putchar('0');
return (c >= 'a' && c <= 'z');
}
