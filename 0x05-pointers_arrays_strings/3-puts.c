#include "main.h"

/**
 * _puts - print a string, followed by a new line
 * @str: strint to print
 */
void _puts(char *str)
{
while (*str != '\n')
{
_putchar(*str++);
}
_putchar('\n');
}
