#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int i, sum, rand_num;
char password[12];

srand(time(0)); /* Seed random number generator */
sum = 0;
i = 0;
while (sum < 2772 - 122) /* 2772 is the sum of the ASCII values of the correct password,
subtract 122 for null terminator and newline character */
{
rand_num = rand() % 94 + 33; /* Generate random number between 33 and 126
			       	(ASCII values of printable characters) */
password[i] = (char) rand_num;
sum += rand_num;
i++;
}

password[i] = (char) (2772 - sum); /* Calculate last character to make sum equal to 2772 */
password[i + 1] = '\n'; /* Add newline character at the end */
password[i + 2] = '\0'; /* Add null terminator at the end */

printf("%s", password); /* Print password */

return (0);
}
