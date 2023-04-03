#include <stdio.h>

/* Declaration of _memset() function */
char *_memset(char *s, char b, unsigned int n);

/**
 * Prints the contents of a memory buffer as hex values
 *
 * @param buffer the buffer to print
 * @param size the size of the buffer in bytes
 */
void print_buffer(char *buffer, unsigned int size)
{
	for (unsigned int i = 0; i < size; i++)
		printf("%02x ", (unsigned char)buffer[i]);

	printf("\n");
}
