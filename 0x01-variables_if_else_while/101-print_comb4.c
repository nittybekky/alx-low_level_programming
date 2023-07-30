#include <stdio.h>
/**
* main - Entry point of the program
*
* Return: Always 0 (Success)
*/
int main(void)
{
int first_digit, second_digit, third_digit;
/* Loop through all possible three-digit combinations */
for (first_digit = 0; first_digit <= 7; first_digit++)
{
for (second_digit = first_digit + 1; second_digit <= 8; second_digit++)
{
for (third_digit = second_digit + 1; third_digit <= 9; third_digit++)
{
/* Print the three-digit combination */
putchar('0' + first_digit);
putchar('0' + second_digit);
putchar('0' + third_digit);
/* Check if it's the last combination */
if (first_digit != 7 || second_digit != 8 || third_digit != 9)
{
/* Print the separator */
putchar(',');
putchar(' ');
}
}
}
}
/* Print newline at the end */
putchar('\n');
return (0);
}
