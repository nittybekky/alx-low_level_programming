#include <stdio.h>
/**
* main - Entry point of the program
*
* Return: Always 0 (Success)
*/
int main(void)
{
int first_digit, second_digit;
/* Loop through all possible two-digit combinations */
for (first_digit = 0; first_digit <= 9; first_digit++)
{
for (second_digit = first_digit + 1; second_digit <= 9; second_digit++)
{
/* Print the two-digit combination */
putchar('0' + first_digit);
putchar('0' + second_digit);
/* Check if it's the last combination */
if (first_digit != 8 || second_digit != 9)
{
/* Print the separator */
putchar(',');
putchar(' ');
}
}
}
/* Print newline at the end */
putchar('\n');
return (0);
}
