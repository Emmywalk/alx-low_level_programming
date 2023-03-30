#include "main.h"
#include <stdio.h>

int main(void)
{
char s1[100] = "Hello ";
char s2[] = "World!";
char *result;

result = _strncat(s1, s2, 5);
printf("s1 = \"%s\", s2 = \"%s\", result = \"%s\"\n", s1, s2, result);

result = _strncat(s1, s2, 10);
printf("s1 = \"%s\", s2 = \"%s\", result = \"%s\"\n", s1, s2, result);

result = _strncat(s1, s2, 0);
printf("s1 = \"%s\", s2 = \"%s\", result = \"%s\"\n", s1, s2, result);

return (0);
}
