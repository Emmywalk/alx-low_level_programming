#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line.
 */
void print_numbers(void)
{
char numbers[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int i;

for (i = 0; i < 10; i++)
{
_putchar(numbers[i]);
}

_putchar('\n');
}
