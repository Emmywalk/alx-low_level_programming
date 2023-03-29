#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: String to which another string is to be appended
 * @src: String to be appended to dest
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int dest_len = 0, i;

while (dest[dest_len] != '\0')
dest_len++;

for (i = 0; src[i] != '\0'; i++)
dest[dest_len + i] = src[i];

dest[dest_len + i] = '\0';

return (dest);
}
