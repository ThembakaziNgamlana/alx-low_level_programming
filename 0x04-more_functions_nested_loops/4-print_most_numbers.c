#include <stdio.h>
#include "main.h"
/**
*print_most_numbers - print numbers excpet 2 & 4
*
*Return: nithing
*/

void proint_must_numbers(void)
{
int n;

for (n = 48; n < 58; n++)
{
if ((n == 50) || (n == 52))
{
continue;
}
putchar(n);
}
putchar(10);
}

