#include "main.h"
#include <stdio.h>

/**
 * _islower - Checks for lowercase character
 *the charater to be checked 
 * Return: 1 for lowercase character or 0 for anything else
 */
int __islower(int c)

{

	if (c >= 97 && c <= 122)
		{

			return (1);
		}
	return (0);
}
