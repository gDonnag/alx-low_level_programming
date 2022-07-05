#include <limits.h>
#include "main.h"
/**
* print_last_digit - prints the last digit of a numer.
* @n: digit to find the last place of.
* Return: The last digit.
*/
int print_last_digit(int n)
{
if (n < 0)
n = n * -1;
_putchar((n % 10) + '0');
return (n % 10);
}
int r;
r = print_last_digit(INT_MIN);
_putchar('0' + r);
_putchar('\n');
return (0);
}
