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
int dest_len = 0;
int i;
/* Find the end of the destination string */
while (dest[dest_len] != '\0')
{
dest_len++;
}
/* Append the source string to the destination string */
for (i = 0; src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}
/* Add a terminating null byte at the end of the concatenated string */
dest[dest_len + i] = '\0';
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
