#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a message to the standard error
 * Return: Always 1 (Error occurred)
 */

int main(void)
{
	const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = sizeof(*msg);
	ssize_t written = write(STDERR_FILENO, msg, len - 1);

	if (written == -1)
		return (0);

	return (1);
}
