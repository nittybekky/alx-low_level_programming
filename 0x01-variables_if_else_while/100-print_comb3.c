/**
* _custom_strcat - Concatenates two strings.
* @dest: Pointer to the destination string.
* @src: Pointer to the source string to be appended to dest.
*
* Return: Pointer to the resulting string dest.
*/
char *_custom_strcat(char *dest, char *src)
{
/* Find the end of the destination string */
int dest_len = 0;
while (dest[dest_len] != '\0')
{
dest_len++;
}
/* Append the source string to the destination string */
int i; // Declare 'i' at the beginning of the block
for (i = 0; src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}
/* Add a terminating null byte at the end of the concatenated string */
dest[dest_len + i] = '\0';
return dest;
}
