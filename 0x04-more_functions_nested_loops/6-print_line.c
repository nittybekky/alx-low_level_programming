#include "main.h"
/**
* print_line - Draws a straightline using '_'.
* @n: The number of times '_' should be printed.
*
* Return: void.
*/
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}
while (n--)
_putchar('_');
_putchar('$');
_putchar('\n');
}
