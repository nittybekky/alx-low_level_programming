#include <stdio.h>
/**
* main - Entry point of the program
*
* Return: Always 0 (Success)
*/
int main(void)
{
int first_num, second_num;
/* Loop through all possible two-digit combinations */
for (first_num = 0; first_num <= 99; first_num++)
{
for (second_num = 0; second_num <= 99; second_num++)
{
/* Check if the two numbers are in ascending order */
if (first_num <= second_num)
{
/* Print the two-digit combination */
printf("%02d %02d", first_num, second_num);
/* Check if it's the last combination */
if (first_num != 99 || second_num != 99)
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
