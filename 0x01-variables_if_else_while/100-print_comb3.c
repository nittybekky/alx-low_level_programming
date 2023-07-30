#include <stdio.h>
/**
* _custom_strcat - Concatenates two strings.
* @dest: Pointer to the destination string.
* @src: Pointer to the source string to be appended to dest.
*
* Return: Pointer to the resulting string dest.
*/
char *_custom_strcat(char *dest, char *src)
{
char *dest_end = dest;
/* Find the end of the destination string */
while (*dest_end)
{
dest_end++;
}
/* Append the source string to the destination string */
while (*src)
{
*dest_end = *src;
dest_end++;
src++;
}
/* Add a terminating null byte at the end of the concatenated string */
*dest_end = '\0';
return dest;
}
int main(void)
{
char dest[50] = "Hello, ";
char src[] = "World!";
printf("Before concatenation: %s\n", dest);
_custom_strcat(dest, src);
printf("After concatenation: %s\n", dest);
return (0);
}
